/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugonzal <gonzalez.julio89@hotmail.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 01:58:46 by jugonzal          #+#    #+#             */
/*   Updated: 2019/08/15 18:16:25 by juligonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct      s_list
{
	void            *content;
	size_t          content_size;
	struct s_list   *next;
}                   t_list;

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
size_t				ft_strlen(const char *s);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isxdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isblank(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int 		    	ft_isgraph(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
char				*ft_strdup(const char *s);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strnew(size_t size);
int					ft_atoi(const char *s);

void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

int 				ft_abs(int j);                                                                        
long int			ft_labs(long int n);
void				ft_putnbr_base_fd(int n, unsigned int base, int fd);
void				ft_putnbr_base(int n, unsigned int base);

char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);
// CHECK ITOA and ITOA BASE neg int 


/*  TODO
ft_iscntrl
// better use pointer in fuction
ft_str_is_alpha
ft_str_is_lowercase
ft_str_is_numeric
ft_str_is_printable
ft_str_is_uppercase
ft_strcapitalize
ft_strcasecmp
ft_strcasestr
ft_strlcpy
ft_strlowcase
ft_strncasecmp
ft_strndup
ft_strupcase
ft_strtok

sqrt
print memory
atoi base
convert base
strrev
sort
*/


//Bonus

//Optionnels
/*
ft_lstnew
ft_lstdelone
ft_lstdel
ft_lstadd
ft_lstiter
ft_lstmap

Si vous réussissez parfaitement la partie obligatoire et la partie bonus, vous êtes
encouragés à ajouter d’autres fonctions qui vous paraissent utiles pour agrandir votre
bibliothèque. Exemples : une version de ft_strsplit qui renvoie une liste de chaines au
lieu d’un tableau de chaines, la fonction ft_lstfold similaire à la fonction reduce de
Python et à la fonction List.fold_left d’OCaml (attention aux fuites mémoires !), des
fonctions de manipulation de tableaux, de piles, de files, de maps, de tables de hash, etc.
La limite est votre imagination.


*/

#endif
