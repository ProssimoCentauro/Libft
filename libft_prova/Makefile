# Name of the library
NAME = libft.a

#Main sources
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

#Bonus sources
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c \

#Convert SRCS *.c in *.o (object files)
OBJS = ${SRCS:.c=.o}

#Convert BONUS *.c in *.o (object files)
OBJS_BONUS = ${BONUS:.c=.o}

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#AR and RM commands
AR = ar crs
RM = rm -rf

#Every *.c must be compiled in *.o files
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#All files must exist
${NAME}: ${OBJS}
	$(AR) $@ $^

#Main target (Executed if the user execute make)
all: ${NAME}

#Rule that delete all the *.o files
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

#Rule that delete all the *.o files and also $(NAME)
fclean: clean
	$(RM) $(NAME)

#Rule that compile everything with new files and no cached ones
re: fclean all

#Rule that compile also the BONUS files
bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY: all bonus clean fclean re
