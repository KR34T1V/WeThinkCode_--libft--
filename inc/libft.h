/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: CTerblanche <1997corry@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 11:59:55 by cterblan          #+#    #+#             */
/*   Updated: 2020/03/19 01:28:16 by CTerblanche      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 500
# define BOLEAN int
# define TRUE 1
# define FALSE 0

# include <sys/types.h>
# include <wchar.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
	Copies string "src" to "dst" and returns populated pointer "dst".
*/
char				*ft_strcpy(char *dst, char const *src);
/*
	Converts the interger "n" to a character string. Returns an allocated string.	
*/
char				*ft_itoa(int n);
/*
	Create an allocated sub string from string "s", starting from "start",
	and ending at "len". If "len" exceeds the string size it will be set to be 
	equal to the string "s" size.
	New allocated string is returned on success. NULL on failure.
*/
char				*ft_strsub(char const *s, unsigned int start, size_t len);
/*
	Concatinates string "s2" onto string "s1" for "n" amounts of bytes.
	Returns concatinated final string.
*/
char				*ft_strncat(char *s1, char const *s2, size_t n);
/*
	Split string "s" at every character "c", 
	Returns a string array, containing all the split words.
*/
char				**ft_strsplit(char const *s, char c);
/*
	Split string "s" at every whitespace, 
	Returning a string array containing all the split words.
*/
char				**ft_strsplit_white(const char *s);
/*
	Concatinates string "s2" to string "s1".
*/
char				*ft_strcat(char *s1, char const *s2);
/*
	Attempts to find char "c" in string "s".
	Returns pointer position to "c" if it is found ('\0' included), or NULL.
*/
char				*ft_strchr(char const *s, int c);
/*
	Creates a duplicate of string "s1"
	Returns allocated pointer to a duplicate string.
*/
char				*ft_strdup(char const *s1);
/*
	Joins string "s2" with string "s1".
	Returns the new allocated string or NULL if unsuccessfull.
*/
char				*ft_strjoin(char const *s1, char const *s2);
/*
	Creates a duplicate string from string "s" performing function (*f)(char),
	on each cahracter.
	Returns the new manipulated string, if successfull or null.
*/
char				*ft_strmap(char const *s, char (*f)(char));
/*
	Creates a duplicate string from string "s" performing function 
	(*f)(unsigned int, char), passing count and character.
	Returns the new manipulated string, if successfull or null.
*/
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*
	Copies "n" amount of characters from string "src" to string "dst",
	returns a pointer to populated string "dst"
*/
char				*ft_strncpy(char *dst, char const *src, size_t len);
/*
	Allocates a new empty string according to "size" and returns a pointer to it.
*/
char				*ft_strnew(size_t size);
/*
	Attempts t find string "needle", in string "haystack" up to 
	"len" amount of characters.
	Returns pointer to "needle" if found, or NULL.
*/
char				*ft_strnstr(char const *h, char const *ndle, size_t len);
/*
	Attempts to find the last occurance of character "int c" in string "s".
	Returns pointer to last "c" if it is found ('\0' included), or NULL.
*/
char				*ft_strrchr(char const *s, int c);
/*
	Tries to find string "needle" in string "haystack", if found a pointer
	to the address of the occurence is returned, else NULL is returned.
*/
char				*ft_strstr(char const *haystack, char const *needle);
/*
	Changes all uppercase characters to lowercase in 
	string "str" and returns the converted string.
*/
char 				*ft_strtolower(const char *str);
/*
	Changes all lowercase characters to uppercase, in 
	string "str" and returns the converted string.
*/
char 				*ft_strtoupper(const char *str);
/*
	Removes all spaces from the front and back of the string.
	Returns an allocated trimmed string.
*/
char				*ft_strtrim(char const *s);
/*
	Takes the given "char *str" and returns the interger conversion thereof.
*/
int					ft_atoi(char const *str);
/*
	Checks if character character is alpha numeric. Returns boolean results.
*/
int					ft_isalnum(int n);
/*
	Checks if input character is alphabetical. Returns Boolean results.
*/
int					ft_isalpha(int n);
/*
	Checks if input character is part of the ascii table.
	Returns boolean results.
*/
int					ft_isascii(int n);
/*
	Tries to find character "c" in the input string "str".
	Returns boolean results.
*/
int					ft_iscfound(char const *str, char const c);
/*
	Checks if input character is a digit (0-9). Returns boolean results.
*/
int					ft_isdigit(int n);
/*
	Checks if input path leads to a directory. Returns boolean results.
*/
int					ft_isdir(const char *path);
/*
	Checks if input path leads to a regular file. Returns boolean results.
*/
int					ft_isreg(const char *path);
/*
	Checks if input character is lowercase. Returns boolean results.
*/
int					ft_islower(int n);
/*
	Checks if input character is whitespace (' ','\n','\t','\v','\f','\r').
	Returns boolean result.
*/
int					ft_isspace(int n);
/*
	Checks if input character is a printable character. Returns boolean results.
*/
int					ft_isprint(int n);

/*
	Checks if input character is uppercase.	Returns boolean results.
*/
int					ft_isupper(int n);
/*	
	Checks if "const char addr" is a valid ipv4 string. Returns boolean results.
*/
int 				ft_isipv4(const char * addr);

/*
	Compares "s1" with "s2" for "n" ammount of bytes.
	Returns the difference should there be one.
*/
int					ft_memcmp(void const *s1, void const *s2, size_t n);
/*
	Compares string "s1" with string "n2" for "n" amount of characters,
	if the strings match 0 is returned, otherwise the difference in 
	character size is retiurned.
*/
int					ft_strcmp(char const *s1, char const *s2);
/*
	Checks if string "s1" is equal to "s2".
	Returns boolean results.
*/
int					ft_strequ(char const *s1, char const *s2);
/*
	Compares string "s1" with string "n2" for "n" amount of characters,
	if the strings match 0 is returned, otherwise the difference in 
	character size is retiurned.
*/
int					ft_strncmp(char const *s1, char const *s2, size_t n);
/*
	Checks if string "s1" is equal to "s2" for "n" amount of characters.
	Returns boolean results.
*/
int					ft_strnequ(char const *s1, char const *s2, size_t n);
/*
	Returns the uppercase value of "n" if it exists.
	else "n" is returned as is.
*/
int					ft_toupper(int n);
/*
	Returns the lowercase value of "n" if it exists.
	else "n" is returned as is.
*/
int					ft_tolower(int n);
/*
	Counts all the words separated by the character "c" in string "s".
	Returns the amount of words found in string "s"
*/
int					ft_wordcount(const char *s, char c);
/*
	Writes a unicode character "wc" to the standard output
*/
int					ft_putwchar(wint_t wc);
/*
	Writes a unicode character "ws" to the "fd" file descriptor
*/
int					ft_putwchar_fd(wint_t wc, int fd);
/*
	Writes a unicode string "ws" to the standard output
*/
int					ft_putwstr(wchar_t *ws);
/*
	Writes a unicode character string "ws" to the "fd" file descriptor
*/
int					ft_putwstr_fd(wchar_t *ws, int fd);
/*
	Reads all data from the given file descriptor "fd" into "line" after allocting
	enough space, 
	Returns 0 when a new line is reached, 1 if more data is to be read \
	and -1 on read error.
*/
int					ft_get_next_line(int const fd, char **line);
/*
	Returns the size of the input 2d array (including null terminates)
*/
size_t				ft_sizeof2d_char(char **t);
/*
	DEPRICATED!! use ft_strchr() instread.
*/
size_t				ft_strclen(char const *str, char c);
/*
	Attepmts to concatinate str "s2" to "s1" if there is enough space.
	If "dstsize" is too small for the concatination the amount bytes needed 
	extra is returned. else the total size is returned.
*/
size_t				ft_strlcat(char *s1, char const *s2, size_t dstsize);
/*
	Returns the length of string "str" excluding the NULL terminate '\0'
*/
size_t				ft_strlen(char const *str);
/*
	Counts all the words separated by any white space in string "s".
	Returns the amount of words found in string "s"
*/
size_t				ft_wordcount_white(const char *s);
/*
	Returns the length of a wide character string "ws" excluding '\0'.
*/
size_t	            ft_wstrlen(wchar_t *ws);

/*
	Performs the function (*f) on each "t_list *lst" element.
	Returns a manipulated list on success or NULL.
*/
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/*
	Allocates a new linked list item with enough size to hold "content" based
	on "content_size" given.
	Returns new allocated list on success, or NULL.
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
/*
	Tries to allocate memory "size", if unsuccessful returns NULL, 
	otherwise it returns a pointer to cleared allocated memory.
*/
void				*ft_memalloc(size_t size);
/*
	Copies memory from "src" to "dst" for "n" ammount bytes, but stops on "c".
	If "c" is found it returns the next memory byte position. else NULL. 
*/
void				*ft_memccpy(void *dst, void const *src, int c, size_t n);
/*
	Attempts to find character "c" at "*s" for up to "n" bytes.
	Returns the address of "c" if found, else NULL.
*/
void				*ft_memchr(void const *s, int c, size_t n);
/*
	Copies "n" bytes of memory form "src" to "dst".
	Returns newly populated void pointer.
*/
void				*ft_memcpy(void *dst, void const *src, size_t n);
/*
	Moves "len" amount of memory from "src" to "dst". Returns the populated pointer.
*/
void				*ft_memmove(void *dst, void const *src, size_t len);
/*
	Populates input pointer "mem" with character "c" for "len" amount of bytes.
	Returns the populated pointer address. 
*/
void				*ft_memset(void *mem, int c, size_t len);
/*
	Clears "n" amount of bytes from "void ptr" by setting consecutive bytes to 0 (null).
*/
void				ft_bzero(void *ptr, size_t n);
/*
	Frees the two dimentional array "char **array" and sets the pointer to null.
*/
void				ft_free2d_char(char **array);
/*
	Appends "t_list *new" to the head of "t_list **alst".
*/
void				ft_lstadd(t_list **alst, t_list *new);
/*
	Performs the (*del) function on each "t_list **alst" node.
*/
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
/*
	Performs the delete function (*del) on the "t_list **alst" item.
*/
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
/*
	Performs the function (*f) on each "t_list *lst" item.
*/
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
/*
	Frees and sets the pointer to NULL
*/
void				ft_memdel(void **ap);
/*
	Writes character "c" to "fd" file descriptor.
*/
void				ft_putchar_fd(char c, int fd);
/*
	Writes character "c" to standard output.
*/
void				ft_putchar(char c);
/*
	Writes the given "str" string followed by a new line "\n" to the "fd" file descriptor.
*/
void				ft_putendl_fd(char const *str, int fd);
/*
	Writes the giver "str" string followed by a new line "\n" to the standard output.
*/
void				ft_putendl(char const *str);
/*
	Writes the interger "n" as a string to the "fd" file descriptor.
*/
void				ft_putnbr_fd(int n, int fd);
/*
	Writes an interger "n" as a string to the standard output.
*/
void				ft_putnbr(int n);
/*
	Writes "str" string to the "fd" file descriptor.
*/
void				ft_putstr_fd(char const *str, int fd);
/*
	Writes "str" string to the standard output.
*/
void				ft_putstr(char const *str);
/*
	Clears the input string setting each byte to '\0'.
*/
void				ft_strclr(char *str);
/*
	Clears string "str" by setting it to '\0', frees and points "str" to NULL. 
*/
void				ft_strdel(char **as);
/*
	Itirates through each character in string "str"
	passing them to function (*f(char*)).
*/
void				ft_striter(char *str, void (*f)(char *));
/*
	Itirates through each character in string "str"
	passing the current count and character to function (*f(char*)).
*/
void				ft_striteri(char *str, void (*f)(unsigned int, char *));

#endif
