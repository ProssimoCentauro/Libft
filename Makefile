#Declarations
NAME = libft.a
HEADERS_DIR := header_files 
LIBFT_DIR := source_files/libft_srcs/
PRINTF_DIR := source_files/printf_srcs/
GNL_DIR := source_files/gnl_srcs/


#Main sourcers
LIBFT_SRCS = $(LIBFT_DIR)ft_isalpha.c $(LIBFT_DIR)ft_isdigit.c $(LIBFT_DIR)ft_isalnum.c $(LIBFT_DIR)ft_isascii.c $(LIBFT_DIR)ft_isprint.c \
    $(LIBFT_DIR)ft_strlen.c $(LIBFT_DIR)ft_memset.c $(LIBFT_DIR)ft_bzero.c $(LIBFT_DIR)ft_memcpy.c $(LIBFT_DIR)ft_memmove.c \
    $(LIBFT_DIR)ft_strlcpy.c $(LIBFT_DIR)ft_strlcat.c $(LIBFT_DIR)ft_toupper.c $(LIBFT_DIR)ft_tolower.c $(LIBFT_DIR)ft_strchr.c \
    $(LIBFT_DIR)ft_strrchr.c $(LIBFT_DIR)ft_strncmp.c $(LIBFT_DIR)ft_memchr.c $(LIBFT_DIR)ft_memcmp.c $(LIBFT_DIR)ft_strnstr.c \
    $(LIBFT_DIR)ft_atoi.c $(LIBFT_DIR)ft_calloc.c $(LIBFT_DIR)ft_strdup.c $(LIBFT_DIR)ft_substr.c $(LIBFT_DIR)ft_strjoin.c \
    $(LIBFT_DIR)ft_strtrim.c $(LIBFT_DIR)ft_split.c $(LIBFT_DIR)ft_itoa.c $(LIBFT_DIR)ft_strmapi.c $(LIBFT_DIR)ft_striteri.c \
    $(LIBFT_DIR)ft_putchar_fd.c $(LIBFT_DIR)ft_putstr_fd.c $(LIBFT_DIR)ft_putendl_fd.c $(LIBFT_DIR)ft_putnbr_fd.c \
    $(LIBFT_DIR)ft_lstnew.c $(LIBFT_DIR)ft_lstadd_front.c $(LIBFT_DIR)ft_lstadd_back.c $(LIBFT_DIR)ft_lstdelone.c \
    $(LIBFT_DIR)ft_lstclear.c $(LIBFT_DIR)ft_lstiter.c $(LIBFT_DIR)ft_lstmap.c $(LIBFT_DIR)ft_lstsize.c \
    $(LIBFT_DIR)ft_lstlast.c $(LIBFT_DIR)applausi_per_fibra.c

PRINTF_SRCS := $(PRINTF_DIR)ft_printf.c  $(PRINTF_DIR)libc_utils.c  $(PRINTF_DIR)print_functions.c

GNL_SRCS := $(GNL_DIR)get_next_line_bonus.c  $(GNL_DIR)get_next_line_utils_bonus.c $(GNL_DIR)get_next_line.c $(GNL_DIR)get_next_line_utils.c


#Variables to convert SRCS and BONUS *.c in *.o (object files)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)
PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)
GNL_OBJS = $(GNL_SRCS:.c=.o)



#Flags
CC = cc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
IFLAG = -I $(HEADERS_DIR)

#All files must exist
$(NAME): $(LIBFT_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)
	$(AR) $@ $^

#Every *.c must be compiled in *.o files
%.o: %.c
	$(CC) $(CFLAGS) $(IFLAG) -c $< -o $@

#Main target (Executed if the user execute make)
all: $(NAME)

#Rule that delete all the *.o files
clean:
	$(RM) $(LIBFT_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)

#Rule that delete all the *.o files and also $(NAME)
fclean: clean
	$(RM) $(NAME)

#Rule that compile everything with new files and no cached one
re: fclean all

.PHONY: all clean fclean re

