# Libft
### **ctype.h**
<details>
<summary>✅ **ft_isalnum.c `int ft_isalnum(int x)`**</summary>
    Comprueba si el parametro de entrada corresponde a un número o a una letra.
</details>
    
- **✅ ft_isalpha.c `int ft_isalpha(int x)`**
    
    Comprueba si el parametro de entrada corresponde a una letra del abecedario inglés.
    
- **✅ ft_isascii.c `int ft_isascii(int x)`**
    
    Comprueba si el parametro de entrada corresponde a a los 127 valores asignados en ASCII.
    
- **✅ ft_isdigit.c `int ft_isdigit(int x)`**
    
    Comprueba si el parametro de entrada corresponde a un número.
    
- **✅ ft_isprint.c `int ft_isprint(int x)`**
    
    Comprueba si el parametro de entrada corresponde a un valor imprimible, es decir no es un carácter especial.
    
- **✅ ft_tolower.c `int ft_tolower(int i)`**
    
    Convierte el parametro con valor alpha a minúscula.
    
- **✅ ft_toupper.c `int ft_toupper(int i)`**
    
    Convierte el parametro con valor alpha a mayúscula.
    
### **stdlib.h**

- ✅ **ft_atoi.c `int ft_atoi(const char *str)`**
    
    Get a string and turn on int
    
- ✅ **ft_calloc.c `void *ft_calloc(size_t nmemb, size_t size)`**
    
    La función `**ft_calloc**` asigna una cantidad de memoria contigua en el [heap](https://www.notion.so/Libft-effe8d0477274bc3a55d1e0c4a1da83b?pvs=21) suficiente para alojar un arreglo de *nmemb* elementos, cada uno de un tamaño de *sizebytes*. **La memoria asignada se inicializa a ceros.**
    
    - **nmemb** : Número de elementos que se desean reservar.
    - **size :** Tamaño en bytes de cada elemento.
    
    **RETURN**
    
    - Devuelve un puntero al bloque de memoria asignado, o NULL si no se pudo asignar suficiente memoria.
    
    **ERROR**
    
    - Si falla al asignar memoria, establece errno en un valor adecuado para indicar el error.

### **Non_Std_Functions**

- ❌ **ft_substr**
- ✅ **ft_strjoin**
- **❌ ft_strtrim**
- **❌ ft_split**
- **❌ ft_itoa**
- **❌ ft_strmapi**
- **❌ ft_striteri**
- ✅ **ft_putchar_fd**
- ✅ **ft_putstr_fd**
- ✅ **ft_putendl_fd**
- ✅ **ft_putnbr_fd**

### **string.h**

- ✅ **ft_bzero.c `void ft_bzero(void *s, size_t n)`**
    
    ⚠️ Establece un bloque de memoria con valores cero.
    
    *Ver [ft_memset](https://www.notion.so/Libft-c2dee085cb184417bfcd444c793297a1?pvs=21).*
    `***s**`, es el bloque de memoria que se quiere establecer a ceros y `**n**`, es el número de bytes que se deben establecer a cero.
    
    ![ft_bzero.png](Libft%20c2dee085cb184417bfcd444c793297a1/ft_bzero.png)
    
- **✅ ft_memchr.c `void *ft_memchr(const void *s, int c, size_t n)`**
    
    Busca un **“byte/valor”** específico dentro de un bloque de memoria.
    
    Si se encuentra el valor dentro de los primero ***n-bytes***, la función devuelve un puntero al byte encontrado.
    
    Si no lo encuentra, devuelve **NULL**.
    
    ![ft_memchr.png](Libft%20c2dee085cb184417bfcd444c793297a1/ft_memchr.png)
    
    - **const void *:** Un bloque de memoeria que no debe modificarse.
        1. Seguridad y protección contra modificaciones accidentales.
        2. Compatibilidad con tipos de datos diversos. → Permite aceptar cualquier tipo de dato como argumento.
        3. Facilita el uso de datos constantes.
- **✅ ft_memcmp.c `int ft_memcmp(const void *s1, const void *s2, size_t n)`**
    
    Compara dos bloques de memoria byte a byte hasta que encuentre una diferencia o hasta ***n-bytes***.
    
    La función devuelve un valor menor, mayor o igual a cero.
    
    ![ft_memcmp.png](Libft%20c2dee085cb184417bfcd444c793297a1/ft_memcmp.png)
    
- **✅ ft_memcpy.c `void *ft_memcpy(void *dest, const void * src, size_t n)`**
    
    Copia los primeros ***n-bytes*** del bloque de memoria fuente al bloque de memoria de destino. 
    
- **✅ ft_memmove.c `void ft_memmove(void *dest, const void *src, size_t len)`**
    
    Se utiliza para copiar la dirección de un bloque de memoria a otra, siendo más seguro que **“cpy”,** ya que gestiona la superposición de los bloques.
    
- **✅ ft_memset.c `void *ft_memset(void *str, int c, size_t n)`**
    
    Establece un bloque de memoria con un valor específico.
    
    Siendo `***str**`, el bloque de memoria que se quiere rellenar con el valor asignado a `**c**`.
    
    Sin embargo, el valor `**int c**` es tratado internamente como un **`unsigned char`.**
    La razón es porque la función trabaja con **`size_t`,** un tipo de dato sin signo que solo representa datos de tipo entero.
    
    Esto es así para, garantizar que cada byte dentro del bloque de memoria pueda ser manipulado de manera efectiva y que no se produzca desbordamientos o interpretaciones erróneas al trabajar con valores fuera de este rango.
    
    ‼️Devuelve un puntero genérico principalmente por consistencia y flexibilidad.
    
    ![ft_memset.png](Libft%20c2dee085cb184417bfcd444c793297a1/ft_memset.png)
    
- **✅ ft_srtchr.c `char *ft_strchr(const char *s, int c)`**
    
    Encuentra la primera ocurrencia del valor en el bloque de memoria, devolviendo el puntero en la posición encontrada.
    
- ✅ **ft_strdup.c `int ft_strncmp(const char *s1, const char *s2, size_t n)`**
    
    Se utiliza para duplicar una cadena de caracteres existente en el heap, asignando memoria para una nueva cadena y copiando el contenido de la cadena original en la nueva memoria asignada.
    
    ### **Parámetro:**
    
    - **`str`**: Puntero a la cadena de caracteres que se desea duplicar.
    
    ### **Valor devuelto:**
    
    - La función **`strdup`** devuelve un puntero al inicio de la nueva cadena duplicada si la asignación de memoria es exitosa.
    - Si no puede asignar memoria, devuelve **`NULL`**.
    
    ### **Comportamiento:**
    
    1. **`strdup`** calcula la longitud de la cadena **`str`** original utilizando la función **`strlen`**.
    2. Luego, asigna memoria suficiente en el heap para almacenar una copia de esa cadena, incluyendo el carácter nulo al final.
    3. Copia el contenido de la cadena original en la nueva memoria asignada utilizando **`strcpy`** o una función similar.
    4. Devuelve un puntero al inicio de la nueva cadena duplicada.
    
    Es importante tener en cuenta que la cadena duplicada creada por **`strdup`** es una copia independiente de la cadena original. Cualquier modificación a la cadena original no afectará a la cadena duplicada, y viceversa.
    
    Por favor, ten en cuenta que la disponibilidad de **`strdup`** puede variar dependiendo de la plataforma o del compilador que estés utilizando. Si no está disponible en tu entorno de desarrollo, puedes implementar tu propia versión utilizando **`malloc`** y **`strcpy`**.
    
- **✅ ft_strlcat.c `size_t ft_strlcat(char *dest, const char *src, size_t size)`**
- **✅ ft_strlcpy.c `size_t ft_strlcpy(char *dest, const char *src, size_t size)`**
- **✅ ft_strlen.c `size_t ft_strlen(const char *str)`**
- **✅ ft_strnstr.c `char *ft_strnstr(const char *str, const char *to_find, size_t len)`**
- **✅ ft_strrchr.c `char *ft_strrchr(const char *s, int c)`**
- ✅ **ft_strncmp.c `int ft_strncmp(const char *s1, const char *s2, size_t n)`**
    
    Compara dos cadenas hasta donde diga n.
    
    Devuelve un entero <, >, = a 0.
    

### Diccionario Tech

- **Heap**
    
    Región de memoria dinámica utilizada por los programas de computadora para la asignación de memoria durante su ejecución.
    
    - **Asignación dinámica de memoria.**
        - Solicita al SO una cantidad específica de memoria durante la ejecución de tu programa utilizando funciones como **`malloc`**, **`calloc`**, **`realloc`**, etc.
    - **Duración de vida de la memoria.**
        - La memoria asignada permanece disponible hasta que se libera explícitamente mediante la función **`free`**.
    - **No estructurada.**
        
        La asignación de memoria se realiza según la disponibilidad
        
    - **Acceso aleatorio.**
        
        Puedes asignar y liberar memoria en cualquier orden y acceder a la memoria de manera no secuencial.
        
    - **Gestión de la memoria**
        
        La gestión del heap es responsabilidad del sistema operativo y de las bibliotecas de tiempo de ejecución del lenguaje de programación que estés utilizando. 
        
    
- **Malloc**
    
    Usado para un único bloque de gran longitud con una longitud especifica.
    
    - Devuelve un puntero de tipo “void”.