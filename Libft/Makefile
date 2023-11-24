# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -pedantic -g

# Target executable
TARGET = my_program

# Source files
SOURCES = ft_split.c ft_strnstr.c ft_isdigit.c ft_strlcpy.c ft_strlen.c ft_memcmp.c ft_strchr.c ft_bzero.c ft_strjoin.c ft_isascii.c ft_memcpy.c ft_isprint.c ft_toupper.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_memset.c ft_substr.c ft_strncmp.c ft_strtrim.c ft_memmove.c ft_strlcat.c ft_calloc.c ft_strdup.c ft_atoi.c ft_isalnum.c ft_tolower.c ft_itoa.c

# Header files
HEADERS = libft.h

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)
