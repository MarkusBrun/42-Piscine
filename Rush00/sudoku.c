/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:29:57 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/24 22:29:58 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void  ft_putstr(char *str)
{
  while (*str)
	write(1, str++, 1);
}

int fillSudoku(int puzzle[][9], int row, int col);

int isAvailable(int puzzle[][9], int row, int col, int num)
{
	int rowStart = (row/3) * 3;
	int colStart = (col/3) * 3;
	int i;

	i = 0;
	while(i < 9)
	{
		if (puzzle[row][i] == num) 
			return 0;
		if (puzzle[i][col] == num) 
			return 0;
		if (puzzle[rowStart + (i % 3)][colStart + (i / 3)] == num) 
			return 0;
		++i;
	}
	return 1;
}
int	place_digit(int i, int puzzle[][9], int row, int col)
{
	while(i < 9)
	{
		if(isAvailable(puzzle, row, col, i+1))
		{
			puzzle[row][col] = i + 1;
			if((col + 1) < 9)
			{
				if(fillSudoku(puzzle, row, col + 1)) 
					return 1;
				else puzzle[row][col] = 0;
			}
			else if((row + 1) < 9)
			{
				if(fillSudoku(puzzle, row+1, 0)) 
					return 1;
				else 
					puzzle[row][col] = 0;
			}
			else 
				return 1;
		}
		i++;
	}
	return (0);
}

int fillSudoku(int puzzle[][9], int row, int col)
{
	int i;
	if(row < 9 && col < 9)
	{
		if(puzzle[row][col] != 0)
		{
			if((col + 1) < 9) 
				return fillSudoku(puzzle, row, col + 1);
			else if((row + 1) < 9) 
				return fillSudoku(puzzle, row + 1, 0);
			else 
				return 1;
		}
		else
		{
			i = 0;
			return(place_digit(i, puzzle, row, col));
		}
		return 0;
	}
	return 1;
}

void    display(int puzzle[][9])
{
	int i;
	int j;
    
	i = 1;
	while(i < 10)
	{
		j = 1;
		while(j < 10)
		{
			ft_putchar(puzzle[i - 1][j - 1] + '0');
			if (j != 9)
				ft_putchar(' ');
			j++;
		} 
		ft_putchar('\n');
		i++;
	}
}
