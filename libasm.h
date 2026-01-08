#pragma once

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"
#define TRUE 1
#define FALSE 0
#define LONG_TEXT "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus ipsum vitae tellus luctus suscipit. Curabitur massa ligula, accumsan et velit eget, consequat commodo nisi. Phasellus nec erat et lorem egestas convallis. Donec sit amet orci nisl. Mauris vehicula nisl sapien, eu viverra massa accumsan in. Cras tempor, lectus at condimentum feugiat, enim magna aliquet justo, sit amet scelerisque mauris urna at nunc. Vivamus sollicitudin, lorem id laoreet gravida, quam lorem luctus arcu, ac mollis sapien purus id nunc. Morbi et felis quis velit vehicula vehicula.Aenean mi turpis, hendrerit sit amet accumsan efficitur, accumsan a tellus. In porta, erat sit amet vulputate tincidunt, massa magna fermentum libero, et pretium mauris nibh vel quam. Nulla consequat ornare gravida. Nam id turpis a massa blandit faucibus vitae euismod orci. Quisque egestas neque quis lectus maximus, nec fermentum quam accumsan. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam in urna id ante luctus finibus. Phasellus ac velit posuere, dignissim odio in, cursus ante. Sed ex elit, finibus et sollicitudin et, porttitor eu nulla. Praesent tristique nisi in arcu aliquam, id faucibus neque fermentum. Praesent iaculis congue varius. Aliquam euismod turpis leo, id tincidunt mi vulputate et. Vivamus sit amet sapien in diam venenatis laoreet. Cras semper mauris vel nibh porta porttitor.Fusce arcu enim, accumsan in nulla nec, finibus placerat nulla. Suspendisse potenti. Donec finibus mauris ultrices bibendum cursus. In id malesuada velit. Donec feugiat est molestie, efficitur nulla eget, semper sapien. Nam tincidunt efficitur consequat. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis interdum quis nibh ac egestas. Fusce quis imperdiet mi. Suspendisse ullamcorper tortor augue, vitae feugiat massa vehicula vitae. Quisque quis sapien sodales, venenatis mauris sed, hendrerit nibh. Phasellus felis nulla, blandit consectetur eros nec, dapibus rutrum quam. Ut pulvinar mollis semper. Donec vitae massa facilisis augue suscipit tristique sed eu nisi. Aliquam venenatis varius nunc ut venenatis. Donec ac libero elit.Aenean ex ante, hendrerit id ornare nec, mattis ut eros. Vivamus lectus mi, faucibus hendrerit nisl scelerisque, imperdiet rutrum odio. Mauris fermentum eleifend leo, in bibendum nulla tincidunt vel. Proin lacinia accumsan dui et finibus. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nunc consectetur mi eu ligula bibendum, quis venenatis dolor vulputate. Mauris sit amet ultricies tortor. In ut velit ac elit convallis vehicula vel in velit. Phasellus imperdiet massa vel tortor volutpat, eget luctus orci dictum. Fusce non augue ex. Cras ut auctor ipsum. In convallis, elit ac dignissim posuere, lectus dui suscipit tortor, vitae porta libero mauris non risus.Sed tincidunt ligula ut lacus dignissim, nec commodo lacus rutrum. In quis egestas orci, sit amet rhoncus mi. Pellentesque et faucibus leo."

// STRUCT BONUS
typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

// MANDATORY
ssize_t	ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		ft_strcmp(char *, char *);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char	*ft_strdup(char *str);

// BONUS
size_t	ft_atoi_base(char *number, char *base);
t_list	*ft_lst_create(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
