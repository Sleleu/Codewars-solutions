#               DESCRIPTION
# Create a function called shortcut to remove the lowercase vowels (a, e, i, o, u ) in a given string.  

def shortcut(s):
    texte_final = []
    for lettre in s :
        if lettre not in "aeiou":
            texte_final.append(lettre)
    return ''.join(texte_final)