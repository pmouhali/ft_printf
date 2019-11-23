# ft_printf

format_set.c :
_ tableau de pointeur sur fonction : void (f)(t_format **f, va_list l)
_ itere sur les flags authorises par la macro FLAGS et les chiffres
_ pour chaque flag appel la fonction correspondante dans le tableau et
modifie les valeur de la struct t_format
_ chaque format_set_function gere les regles relatives au flag dont elle s'occupe
_ fset_init reinitalise la struct au default values
_ l'index d'un flag dans FLAGS correspond a celui de sa fonction dans le
tableau de pointeurs sur fonctions.


