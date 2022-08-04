/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donkang <donkang@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:36:10 by donkang           #+#    #+#             */
/*   Updated: 2022/08/04 20:37:57 by donkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// 매개변수로 받은 buffer와 buf를 합치고 free시켜주는 함수
char	*ft_joinfree(char *buffer, char *buf)
{
	char	*tmp;

	tmp = ft_strjoin(buffer, buf);
	free(buffer);
	return (tmp);
}

/*
buffer는 다음 줄을 가리키도록 하는 함수

*/
char	*ft_nextbuf(char *buffer)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	// 널 가드 수정
	// if (!line)
	// 	return (NULL);
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	//line[j] = '\0';
	free(buffer);
	return (line);
}

/*
ft_read_line 작업을 거치고 넘어온 한 줄에서 개행문자의 전후를 분리 및 추출하는 작업
0. 읽어들인 한 줄에서 while문을 돌면서 개행문자(2byte)의 위치를 확인
1. 만일 개행문자 말고 EOF 가 발견된다면 0 반환 (출력하는 줄은 그대로)
2. 개행문자 위치 이후로부턴 buffer 에 저장
3. buffer 은 개행문자 이후 데이터로, buffer 의 첫 문자가 EOF 라면 메모리 해제 후 NULL 반환
(정확하게 개행문자까지 읽음 or 실제 파일 마지막일 수도 있음)
읽어들인 한 줄의 개행문자 위치 이전은 실질적으로 출력해야할 데이터로, 해당 줄의 개행문자 + 1 위치에 \0 저장
*/
char	*ft_getline(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	// 널 가드 수정
	// if (!line)
	// 	return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	// 마지막 if 수정
	// if (buffer[i] == '\n')
	// 	line[i++] = '\n';
	// line[i] = '\0';
	return (line);
}

/*
fd와 buffer의 포인터를 받아서 파일을 읽고 개행문자 줄을 추출하는 함수
0. buffer 포인터인 res가 없다면 1만큼 할당하고 반환한다. -> 마지막 null처리
1. 버퍼 사이즈 만큼 buffer에 메모리 할당힌디. 
2. fd에 할당된 파일을 read로 읽고, buffer 배열에 데이터를 저장
3. res 배열에 데이터가 저장되어있는 buffer 배열을 연결
4. res에 개행이 포함되지 않았다면 strjoin으로 개행이 포함 될 때까지 이어붙인다.
개행이 포함되었다면 더이상 읽지 않는다. (한 줄을 찾았으니까!)
*/
char	*ft_readfile(int fd, char *res)
{
	char	*buf;
	int		read_byte;

	if (!res)
		res = ft_calloc(1, 1); 
		// return null 위치 수정
	buf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_byte = 1;
	while (read_byte > 0)
	{
		read_byte = read(fd, buf, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[read_byte] = 0;
		res = ft_joinfree(res, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	return (res);
}

/*
정적변수 buffer를 선언한다. 시작 주소를 계속해서 저장하기 위한 백업 버퍼역할을 한다. 
메인 함수로 BUFFER_SIZE가 음수이거나, fd가 음수(open 실패)이거나 read()함수 시작을 읽고, 음수라면 에러이므로 NULL을 반환한다. 
readfile로 fd를 buffer만큼 읽고 buffer에 다시 저장한다. 
만약에 buffer값이 0이하면 실패한 것이므로 NULL 반환
정상적으로 readfile을 실행했다면 적절히 가공하여 개행을 기준으로 반환할 한줄을 만들고 line에 저장한다. 
그리고 buffer는 다음 줄을 가리키도록 ft_next를 실행시켜준다. 
*/
char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = ft_readfile(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_getline(buffer);
	buffer = ft_nextbuf(buffer);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int   main(void)
// {
//    char   *line;
//    int      i;
//    int      fd1;
//    fd1 = open("./test", O_RDONLY);
//    i = 1;
//    while (i < 7)
//    {
//       line = get_next_line(fd1);
//       printf("line [%02d]: %s", i, line);
//       free(line);
//       i++;
//    }
//    close(fd1);
//    return (0);
// }