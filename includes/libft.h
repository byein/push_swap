#ifndef  LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# define BUFFER_SIZE 1000
# define TRUE 1
# define FALSE 0
# define PARTS 9

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}	t_stack;

long	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdel(char **adr_str);
void	join_bufto_str(char **str, void *buf);
char	*gnl(ssize_t readr, char **str_input);
char	*get_next_line(int fd);
void	*free_2d(char **tab);
void	handle_errors(void);
int		check_numbers(char **av);
int		ft_str_check_numbers(char *str);
char	*join_strings(char **av);
t_stack	*new_node(int number);
int		push(t_stack **stack, int number);
int		insert_first(t_stack **stack, int number);
void	push_elements(t_stack **stack, char **av);
int		check_number(t_stack **stack, int number);
void	free_and_exit(t_stack **stack);
int		free_stack(t_stack **stack);
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_ab(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);
int		pop(t_stack **stack);
void	print_stack(t_stack *stack);
void	remove_last(t_stack **stack);
int		check_sorted(t_stack **stack_a);
int		numbers_len(char **numbers);
int		ft_lstsize(t_stack *lst);
int		check_sort(t_stack **stack_a);
int		get_smallest_number(t_stack *stack_a);
int		get_index(t_stack *stack_a, int number);
void	sort(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_lstnew(int number);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
int		*copy_stack(t_stack **stack_a, int *stack_size);
void	ra_or_rra(int index, int jndex, t_stack **stack_a);
void	sort_moreten(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack_a);
void	ra_or_rra(int index, int jndex, t_stack **stack_a);
void	push_smallest(t_stack **stack_a, t_stack **stack_b);
void	sort_lessten(t_stack **stack_a, t_stack **stack_b);
void	sort_stack(int *tab, int size);
void	push_to_b(t_stack **stack_a, t_stack **stack_b,
			int key_nbr, int stack_size);
int		get_smallest(t_stack **stack_b);
void	push_largest_to_a(t_stack **stack_a, t_stack **stack_b);
void	rb_or_rrb(int index, int jndex, t_stack **stack_b);
int		get_largest(t_stack **stack_b);
void	sort_lessten_two(t_stack **stack_a, t_stack **stack_b);
void	push_everything_back(t_stack **stack_a, t_stack **stack_b);
int		*sort_array_parts(t_stack **stack_a);
void	move_number_to_b(t_stack **stack_a, t_stack **stack_b, int nb);
void	move_to_b(t_stack **stack_a, t_stack **stack_b, int *tab);
int		ft_strcmp(char *s1, char *s2);
char	**get_numbers(char **av);
int		check_sort(t_stack **stack_a);
#endif
