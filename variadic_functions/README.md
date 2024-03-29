hellow variadic functions 

#include <stdarg.h>
void va_start(va_list ap, last);
type va_arg(va_list ap, type);
void va_end(va_list ap); void va_copy(va_list dest, va_list src);  

DESCRIPTION
Une fonction peut être appelée avec un nombre variable d'arguments, eux-mêmes de types variables. Une telle fonction est dite « variadique ». Le fichier d'entête <stdarg.h> déclare un type va_list et définit trois macros permettant de parcourir la liste d'arguments dont le nombre et les types ne sont pas connus par la fonction appelée.
La fonction appelée doit déclarer un objet de type va_list utilisé par les macros va_start(), va_arg() et va_end().  

va_start()
La macro va_start() initialise ap pour les utilisations ultérieures de va_arg() et va_end(), et doit donc être appelée en premier.
Le paramètre last est le nom du dernier paramètre avant la liste d'argument variable, c'est-à-dire le dernier paramètre dont la fonction connaisse le type.

Comme l'adresse de ce paramètre est utilisée dans la macro va_start(), il ne doit pas être déclaré comme une variable en registre, ni comme un type fonction ou tableau.  

va_arg()
La macro va_arg() se développe en une expression qui a le type et la valeur de l'argument suivant de l'appel. Le paramètre ap est la va_list ap initialisée par va_start(). Chaque appel de va_arg() modifie ap pour que l'appel suivant renvoie l'argument suivant. Le paramètre type est le nom du type, indiqué de telle manière qu'un pointeur sur un objet de ce type puisse être déclaré simplement en ajoutant un astérisque à type.
La première utilisation de la macro va_arg() après celle de va_start() renvoie l'argument suivant last. Les invocations successives renvoient les valeurs des arguments restants.

S'il n'y a pas d'argument suivant, ou si type n'est pas compatible avec le type réel du prochain argument, des erreurs imprévisibles se produiront.

Si ap est passé à une fonction qui utilise va_arg(ap,type) alors la valeur de ap est indéfinie après le retour de cette fonction.  

va_end()
À chaque invocation de va_start() doit correspondre une invocation de va_end() dans la même fonction. Après l'appel va_end(ap) la variable ap est indéfinie. Plusieurs traversées de la liste sont possibles, à condition que chacune soit encadrée par va_start() et va_end(). va_end() peut être une macro ou une fonction.  
va_copy()
Une implémentation évidente est de représenter va_list par un pointeur dans la pile de la fonction variadique. Dans une telle situation (de loin la plus courante), rien ne semble s'opposer à une affectation

va_list aq = ap;

Malheureusement, il y a aussi des systèmes qui créent une table de pointeurs (de longueur 1), et on devrait écrire

va_list aq;
*aq = *ap;

De plus, sur les systèmes où les paramètres sont passés dans des registres, il peut être nécessaire pour va_start() d'allouer de la mémoire, d'y enregistrer les paramètres ainsi que l'indication du paramètre suivant, afin que va_arg() puisse balayer la liste. Ainsi va_end() pourra libérer la mémoire allouée. Pour gérer ces situations, C99 ajoute une macro va_copy(), afin que les affectations ci-dessus soient remplacées par

va_list aq;
va_copy(aq, ap);
...
va_end(aq);

À chaque invocation de va_copy() doit correspondre une invocation de va_end() dans la même fonction. Certains systèmes qui ne disposent pas de va_copy() ont une macro __va_copy() à la place, puisque c'était le nom proposé auparavant.  
CONFORMITÉ
Les macros va_start(), va_arg() et va_end() sont conformes à C89. C99 définit la macro va_copy().  
NOTES
Ces macros ne sont pas compatibles avec les anciennes macros qu'elles remplacent. Une compatibilité de version peut être obtenue en incluant le fichier d'entête <varargs.h>.
La mise en oeuvre historique est :


#include <varargs.h>

void
foo(va_alist)
    va_dcl
{
    va_list ap;

    va_start(ap);
    while (...) {
        ...
        x = va_arg(ap, type);
        ...
    }
    va_end(ap);
}

Sur certains systèmes, va_end() contient une accolade fermante « } » correspondant à l'accolade ouvrante « { » dans va_start(), ainsi les deux macros doivent se trouver dans la même fonction, placées d'une manière qui permette ceci.
