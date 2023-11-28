/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vketteni <vketteni@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:15:25 by vketteni          #+#    #+#             */
/*   Updated: 2023/11/21 15:00:22 by vketteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

void	ft_allocation_error(char **array)
{
	int	i;

	i = 0;
	while (array[i] != 0)
		free(array[i++]);
	free(array);
}

char	**ft_get_result_array(char const *s, char c)
{
	char	**result;
	char const	*ptr;
	int	delimiter_count;

	delimiter_count = 0;
	ptr = s;
	while (*ptr++)
	{
		if (*ptr == c)
			delimiter_count++;
	}

	result = (char **)malloc(sizeof(char *) * (delimiter_count + 1) + 1);
	if (result == 0)
		return (0);
	result[delimiter_count + 1] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	const char	*start;
	const char	*ptr;
	int	i;

	result = ft_get_result_array(s, c);
	if (result == 0)
		return (0);
	i = 0;
	ptr = s;
	start = s;
	int position = 0;
	while (*ptr)
	{
		if (*ptr == c)
		{
			int len = ptr - start;
			result[i] = ft_substr(s, position, len);
			if (result[i] == 0)
				ft_allocation_error(result);
			i++;

			start = ptr + 1;
			position += (len + 1);
		}
		ptr++;


	}
	result[i] = ft_substr(s, position, ptr - start);
	if (result[i] == 0)
		ft_allocation_error(result);
	return (result);
}



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to free the memory allocated for the result of ft_split
void	free_split_result(char **result)
{
	int i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

int main(void)
{
	// Test Case 1: Testing split on an empty string
	printf("Test Case 1: Testing split on an empty string.\n");
	char *test_1 = "";
	char **result_1 = ft_split(test_1, ' ');
	char *expected_1[] = {NULL};
	printf("String:\t\t'%s'\nDelimiter:\t'%s'\nResult:\t\t'%p'\nExpected:\t'%p'\nPass:\t\t%s\n\n", test_1, " ", (void*)result_1, (void*)expected_1, result_1[0] == expected_1[0] ? "Yes" : "No");
	free_split_result(result_1);

	// Test Case 2: Testing split with a char that isn't in string
	printf("Test Case 2: Testing split with a char that isn't in string.\n");
	char *test_2 = "ThisIsAString";
	char **result_2 = ft_split(test_2, ' ');
	char *expected_2[] = {"ThisIsAString", NULL};
	printf("String:\t\t'%s'\nDelimiter:\t'%s'\nResult:\t\t'%s'\nExpected:\t'%s'\nPass:\t\t%s\n\n", test_2, " ",result_2[0], expected_2[0], strcmp(result_2[0], expected_2[0]) == 0 && result_2[1] == expected_2[1] ? "Yes" : "No");
	free_split_result(result_2);

	// Test Case 3: Testing split with a char that is in string
	printf("Test Case 3: Testing split with a char that is in string.\n");
	char *test_3 = "Split,This,String";
	char **result_3 = ft_split(test_3, ',');
	char *expected_3[] = {"Split", "This", "String", NULL};
	printf("String:\t\t'%s'\nDelimiter:\t'%s'\nResult:\t\t'%s' '%s' '%s'\nExpected:\t'%s' '%s' '%s'\nPass:\t\t%s\n\n", test_3, ",",result_3[0], result_3[1], result_3[2], expected_3[0], expected_3[1], expected_3[2], strcmp(result_3[0], expected_3[0]) == 0 && strcmp(result_3[1], expected_3[1]) == 0 && strcmp(result_3[2], expected_3[2]) == 0 && result_3[3] == expected_3[3] ? "Yes" : "No");
	free_split_result(result_3);

	// Test Case 4: Testing split with a match on the first char in string
	printf("Test Case 4: Testing split with a match on the first char in string.\n");
	char *test_4 = "FirstMatchInTheString";
	char **result_4 = ft_split(test_4, 'F');
	char *expected_4[] = {"", "irstMatchInTheString", NULL};
	printf("String:\t\t'%s'\nDelimiter:\t'%s'\nResult:\t\t'%s' '%s'\nExpected:\t'%s' '%s'\nPass:\t\t%s\n\n", test_4, "F",result_4[0], result_4[1], expected_4[0], expected_4[1], strcmp(result_4[0], expected_4[0]) == 0 && strcmp(result_4[1], expected_4[1]) == 0 && result_4[2] == expected_4[2] ? "Yes" : "No");
	free_split_result(result_4);

	// Test Case 5: Testing split with a match on the final char in string
	printf("Test Case 5: Testing split with a match on the final char in string.\n");
	char *test_5 = "StringWithMatchZ";
	char **result_5 = ft_split(test_5, 'Z');
	char *expected_5[] = {"StringWithMatch", "", NULL};
	printf("String:\t\t'%s'\nDelimiter:\t'%s'\nResult:\t\t'%s' '%s'\nExpected:\t'%s' '%s'\nPass:\t\t%s\n\n", test_5, "Z",result_5[0], result_5[1], expected_5[0], expected_5[1], strcmp(result_5[0], expected_5[0]) == 0 && strcmp(result_5[1], expected_5[1]) == 0 && result_5[2] == expected_5[2] ? "Yes" : "No");
	free_split_result(result_5);

	// Test Case 6: Testing split with a match on two successive chars in string
	printf("Test Case 6: Testing split with a match on two successive chars in string.\n");
	char *test_6 = "SuccessiveMatch";
	char **result_6 = ft_split(test_6, 's');
	char *expected_6[] = {"Succe","","iveMatch", NULL};
	printf("String:\t\t'%s'\nDelimiter:\t'%s'\nResult:\t\t'%s' '%s' '%s'\nExpected:\t'%s' '%s' '%s'\nPass:\t\t%s\n\n", test_6, "s",result_6[0], result_6[1], result_6[2], expected_6[0], expected_6[1], expected_6[2], strcmp(result_6[0], expected_6[0]) == 0 && strcmp(result_6[1], expected_6[1]) == 0 && strcmp(result_6[2], expected_6[2]) == 0 && result_6[3] == expected_6[3] ? "Yes" : "No");
	free_split_result(result_6);

	return 0;
}
