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
# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -pedantic

# Target executable
TARGET = libft.a

# Source files
SOURCES = main.c ft_strnstr.c ft_isdigit.c ft_strlcpy.c ft_strlen.c ft_memcmp.c \
          ft_strchr.c ft_bzero.c ft_strjoin.c ft_isascii.c ft_memcpy.c ft_isprint.c \
          ft_toupper.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_memset.c ft_substr.c \
          ft_strncmp.c ft_strtrim.c ft_memmove.c ft_strlcat.c ft_calloc.c ft_strdup.c \
          ft_atoi.c ft_isalnum.c ft_tolower.c

# Bonus source files
BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
                ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Header files
HEADERS = libft.h

# Object files
OBJS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS) $(HEADERS)
	$(AR) rcs $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJS) $(BONUS_SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c $(BONUS_SOURCES)
	$(AR) rcs $(TARGET) $(OBJS) $(BONUS_SOURCES:.c=.o)

clean:
	rm -f $(TARGET) $(OBJS) $(BONUS_SOURCES:.c=.o)
	rm -f $(TARGET)
