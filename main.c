/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlunar-a < jlunar-a@student.42urduliz.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:10:52 by jlunar-a          #+#    #+#             */
/*   Updated: 2023/10/07 11:34:48 by jlunar-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void){

   /*  Prueba de ft_atoi()*/
   printf("*************** Prueba de ft_atoi() ************** \n");
    char *string = "1234";
    char *string2 = "1a2a3a4a";
    printf("El string es: %s\n", string);
    printf("\nLa función ft_atoi() devuelve el nº: %d\n", ft_atoi(string));
    printf("El string2 es: %s\n", string2);
    printf("\nLa función ft_atoi() devuelve el nº: %d\n\n\n", ft_atoi(string2));
  
  /* Prueba de ft_bzero()*/
    printf("\n ************** Prueba de ft_bzero() ************\n");
    char arr[10] = "123456789";
    int a = 5;
    printf("El array es: %s\n", arr);
    ft_bzero(arr, a);
    printf("El array con bzero() es: %s\n\n\n", arr);

    /* Prueba de ft_isalpha()*/
    printf("\n ************** Prueba de ft_isalpha() ************\n");
    int c = 'a';
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
    c = 'z';
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
    c = 'A';
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
    c = 'Z';
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
    c = '0';
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
    c = '&';
    printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));


    /* Pueba de ft_isalnum()*/
    printf("\n ************** Prueba de ft_isalnum() ************\n");
    c = 'a';
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    c = '5';
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    c = 'A';
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    c = 'z';
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    c = '8';
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));
    c = '?';
    printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));

    /* Prueba de ft_calloc()*/
    printf("\n ************** Prueba de ft_calloc() ************\n");
    int *ptr;
    int nmem = 5;
    int size = sizeof(int);
    ptr = ft_calloc(nmem, size);
    printf("El array con calloc() es: %d\n\n\n", ptr[0]);
    free(ptr);
    
    /* Prueba de ft_isascii()*/
    printf("\n ************** Prueba de ft_isascii() ************\n");
    c = 'a';
    printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
    c = '5';
    printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
    c = 'A';
    printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
    c = 'z';
    printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
    c = '8';
    printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));
    c = '?';
    printf("ft_isascii('%c') = %d\n", c, ft_isascii(c));


    /* Prueba de ft_isdigit()*/
    printf("\n ************** Prueba de ft_isdigit() ************\n");
    c = 'a';
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
    c = '5';
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
    c = 'A';
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
    c = 'z';
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
    c = '8';
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));
    c = '?';
    printf("ft_isdigit('%c') = %d\n", c, ft_isdigit(c));


    /*Prueba de ft_isprint()*/
    printf("\n ************** Prueba de ft_isprint() ************\n");
    c = 'a';
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    c = '5';
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    c = 'A';
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    c = 'z';
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    c = '8';
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    c = '?';
    printf("ft_isprint('%c') = %d\n", c, ft_isprint(c));
    

    /* Prueba de ft_memchr()*/
    printf("\n ************** Prueba de ft_memchr() ************\n");
    {
     char strk[] = "Hola mundo";
     char *ptr1 = ft_memchr(strk, 'm', sizeof(strk));
     if (ptr1 != NULL) 
     {
      printf("Encontrado en posición %ld\n", ptr1 - strk);
      } else 
      {
        printf("Caracter no encontrado\n");
      }
    }

    /* Prueba de ft_memcmp()*/
    printf("\n ************** Prueba de ft_memcmp() ************\n");
    char *strm = "hola";
    char *strn = "h0la";
    printf("El strm es: %s\n", strm);
    printf("\nLa función ft_memcmp() devuelve el nº: %d\n", ft_memcmp(strm, strn, 4));
    printf("El strn es: %s\n", strn);
    printf("\nLa función ft_memcmp() devuelve el nº: %d\n\n\n", ft_memcmp(strn, strm, 4));

    /* Prueba de ft_memcpy()*/
    printf("\n ************** Prueba de ft_memcpy() ************\n");
    char srco[50] = "Hola Mundo";
    char desta[50] = "A";
    printf("Contenido de dest antes de memcpy: %s\n", desta);
    ft_memcpy(desta, srco, 5);
    printf("Contenido de dest después de memcpy de 5 bytes: %s\n", desta);
    ft_memcpy(desta, srco, sizeof(srco));
    printf("Contenido de dest después de memcpy con todo el origen: %s\n", desta);
    

/* Prueba de ft_memset() */
    printf("\n ************** Prueba de ft_memset() ************\n");
    char strp[50] = "Hola Mundo";
    printf("Contenido de str antes de memset: %s\n", strp);
    ft_memset(strp, 'a', 5);
    printf("Contenido de str después de memset: %s\n", strp);
    
/* Prueba de ft_strchr() */
    printf("\n ************** Prueba de ft_strchr() ************\n");
    char strs[50] = "Hola Mundo";
    printf("La cadena str es: %s\n", strs);
    char *ptr2;
    ptr2 = ft_strchr(strs, 'M');
    if (ptr2 != NULL)
    {
      printf("La cadena después de M es: %s\n", ptr2);
    }

/* Prueba de ft_memmove() */
    printf("\n ************** Prueba de ft_memmove() ************\n");
    char stru[50] = "Hola Mundo";
    char destu[50] = "A";
    printf("Contenido de dest antes de memmove: %s\n", destu);
    ft_memmove(destu, stru, 5);
    printf("Contenido de dest después de memmove de 5 bytes: %s\n", destu);
    ft_memmove(destu, stru, sizeof(stru));
    printf("Contenido de dest después de memmove con todo el origen: %s\n", destu);

 /* Prueba de ft_strdup() */
    printf("\n ************** Prueba de ft_strdup() ************\n");
    char *strv = "Hola Mundo";
    char *ptr3;
    ptr3 = ft_strdup(strv);
    printf("La cadena duplicada es: %s\n", ptr3);
    free(ptr3);

/* Prueba de ft_strlcat() */
    printf("\n ************** Prueba de ft_strlcat() ************\n");
    char strw[50] = "Hola Mundo";
    char destw[50] = "A";
    printf("Contenido de dest antes de strlcat: %s\n", destw);
    ft_strlcat(destw, strw, 5);
    printf("Contenido de dest después de strlcat de 5 bytes: %s\n", destw);
    ft_strlcat(destw, strw, sizeof(strw));
    printf("Contenido de dest después de strlcat con todo el origen: %s\n", destw);

/* Prueba de ft_strlcpy() */
    printf("\n ************** Prueba de ft_strlcpy() ************\n");
    char strx[50] = "Hola Mundo";
    char destx[50] = "A";
    printf("Contenido de dest antes de strlcpy: %s\n", destx);
    ft_strlcpy(destx, strx, 5);
    printf("Contenido de dest después de strlcpy de 5 bytes: %s\n", destx);
    ft_strlcpy(destx, strx, sizeof(strx));
    printf("Contenido de dest después de strlcpy con todo el origen: %s\n", destx);

/* Prueba de ft_strlen() */
    printf("\n ************** Prueba de ft_strlen() ************\n");
    char stry[50] = "Hola Mundo";
    printf("La longitud de la cadena es: %zu\n", ft_strlen(stry));

/* Prueba de ft_strncmp() */
    printf("\n ************** Prueba de ft_strncmp() ************\n");
    char *strz = "hola";
    char *straa = "h0la";
    printf("El strz es: %s\n", strz);
    printf("\nLa función ft_strncmp( con n=4) devuelve el nº: %d\n", ft_strncmp(strz, straa, 4));
    printf("El straa es: %s\n", straa);
    printf("\nLa función ft_strncmp( con n=3 ) devuelve el nº: %d\n\n\n", ft_strncmp(straa, strz, 3));

/* Prueba de ft_strrchr() */
    printf("\n ************** Prueba de ft_strrchr() ************\n");
    const char* str = "Hola mundo";
    char* res = ft_strrchr(str, 'o');
    if (res != NULL) {
        printf("Se encontró el caracter 'o' en: %p", (void *)res);
    } else {
        printf("Caracter 'o' no encontrado");
    }
        
 /* Prueba de ft_tolower() */
    printf("\n ************** Prueba de ft_tolower() ************\n");
    c = 'A';
    printf("ft_tolower('%c') = %c\n", c, ft_tolower(c));
    c = 'Z';
    printf("ft_tolower('%c') = %c\n", c, ft_tolower(c));
    c = 'a';
    printf("ft_tolower('%c') = %c\n", c, ft_tolower(c));
    c = 'z';
    printf("ft_tolower('%c') = %c\n", c, ft_tolower(c));
    c = '1';
    printf("ft_tolower('%c') = %c\n", c, ft_tolower(c));

/* Prueba de ft_toupper() */
    printf("\n ************** Prueba de ft_toupper() ************\n");
    c = 'A';
    printf("ft_toupper('%c') = %c\n", c, ft_toupper(c));
    c = 'Z';
    printf("ft_toupper('%c') = %c\n", c, ft_toupper(c));
    c = 'a';
    printf("ft_toupper('%c') = %c\n", c, ft_toupper(c));
    c = 'z';
    printf("ft_toupper('%c') = %c\n", c, ft_toupper(c));
    c = '1';
    printf("ft_toupper('%c') = %c\n", c, ft_toupper(c));

/* Prueba de ft_strnstr()  */

  printf("\n ************** Prueba de ft_strnstr() ************\n");  
	char *str1 = "hola";
	char *str2 = "la";
	char *str3 = "hola";
	char *str4 = "la";
	size_t len = 4;
	printf("El str1 es: %s\n", str1);
	printf("El str2 es: %s\n", str2);
	printf("\nLa función ft_strnstr() devuelve: %s\n", ft_strnstr(str1, str2, len));
	printf("El str3 es: %s\n", str3);
	printf("El str4 es: %s\n", str4);
	printf("\nLa función ft_strnstr() devuelve: %s\n\n\n", ft_strnstr(str3, str4, len));

    printf("\n ************** Prueba de ft_substr() ************\n");
    char *strb = "Hola Mundo";
    char *ptr4;
    ptr4 = ft_substr(strb, 2, 5);
    printf("La cadena es: %s\n", ptr4);
    free(ptr4);
    

    return (0);  
}