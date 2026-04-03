# ft_printf

> Perché `ft_putnbr()` e `ft_putstr()` non sono abbastanza.

[![42 School](https://img.shields.io/badge/42-School-blue)](https://42.fr)
[![Norminette](https://img.shields.io/badge/Norminette-passing-brightgreen)](https://github.com/42School/norminette)

## 📋 Indice

- [Descrizione](#-descrizione)
- [Conversioni supportate](#-conversioni-supportate)
- [Compilazione](#-compilazione)
- [Utilizzo](#-utilizzo)
- [Funzioni implementate](#-funzioni-implementate)
- [Autore](#-autore)

## 📖 Descrizione

**ft_printf** è una reimplementazione della funzione `printf()` della libreria standard del C. Il progetto fa parte del cursus della 42 e ha come obiettivo la comprensione delle **funzioni variadiche** e della formattazione dell'output.

La funzione gestisce una stringa di formato con un numero variabile di argomenti e restituisce il numero totale di caratteri stampati.

## 🔄 Conversioni supportate

| Specifier | Descrizione |
|:---------:|-------------|
| `%c` | Stampa un singolo carattere |
| `%s` | Stampa una stringa |
| `%p` | Stampa un indirizzo di puntatore in esadecimale |
| `%d` | Stampa un numero decimale (base 10) con segno |
| `%i` | Stampa un intero in base 10 |
| `%u` | Stampa un numero decimale senza segno |
| `%x` | Stampa un numero in esadecimale (minuscolo) |
| `%X` | Stampa un numero in esadecimale (maiuscolo) |
| `%%` | Stampa il simbolo percentuale |

## 🛠 Compilazione

```bash
# Compila la libreria
make

# Pulisce i file oggetto
make clean

# Pulisce tutto (oggetti + libreria)
make fclean

# Ricompila da zero
make re
```

Verrà generato il file `libftprintf.a`.

## 💻 Utilizzo

### 1. Includi l'header

```c
#include "ft_printf.h"
```

### 2. Compila con la libreria

```bash
gcc -Wall -Wextra -Werror ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_puthex.c ft_puthex_ptr.c ft_putpointer.c -o test && ./test

```

### 3. Esempio

```c
#include "ft_printf.h"

int	main(void)
{
	int	count;

	count = ft_printf("Ciao %s!\n", "42");
	ft_printf("Caratteri stampati: %d\n", count);
	ft_printf("Numero: %d | Hex: %x | Unsigned: %u\n", -42, 255, 42);
	ft_printf("Puntatore: %p\n", &count);
	ft_printf("Percentuale: %%\n");
	return (0);
}
```

## 📁 Funzioni implementate

| File | Funzione | Descrizione |
|------|----------|-------------|
| `ft_printf.c` | `ft_printf` | Funzione principale |
| `ft_printf.c` | `handle_conversion` | Gestisce gli specificatori |
| `ft_putchar.c` | `ft_putchar` | Stampa un carattere |
| `ft_putstr.c` | `ft_putstr` | Stampa una stringa |
| `ft_putnbr.c` | `ft_putnbr` | Stampa un intero con segno |
| `ft_putunsigned.c` | `ft_putunsigned` | Stampa un intero senza segno |
| `ft_puthex.c` | `ft_puthex` | Stampa in esadecimale |
| `ft_putpointer.c` | `ft_putpointer` | Stampa un puntatore |
| `ft_puthex_ptr.c` | `ft_puthex_ptr` | Helper per puntatori |

## 📚 Risorse utili

- [Variadic Functions in C](https://en.cppreference.com/w/c/variadic)
- [man 3 printf](https://man7.org/linux/man-pages/man3/printf.3.html)

## 👤 Autore

**enucci** - 42 Student

---

*Progetto realizzato come parte del cursus 42.*
