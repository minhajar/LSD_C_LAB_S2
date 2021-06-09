#include"header3.h

int listeDoubleVide(listeDouble L)
{
    if(L.debut==NULL)
        return 1;
    return 0;
}


void affichageListeDouble(listeDouble L)
{
    if(listeDoubleVide(L)==1)
    {
        printf("[]\n");
        return;
    }
    celluleDouble *temp=L.debut;
    printf("[");
    while(temp->suivant!=NULL)
    {
        printf("%c, ",temp->element);
        temp=temp->suivant;
    }
    if(temp!=NULL)
        printf("%c",temp->element);
    printf("]\n");
    return;
}
void ajoutFinD(char x,listeDouble *L)
{
    celluleDouble * C=(celluleDouble *)malloc(sizeof(celluleDouble));
    C->element=x;
    C->precedent=L->fin;
    C->suivant=NULL;
    
    
    if(listeDoubleVide(*L)==1)
    {
        ajoutDebutD(x,L);
        return;
    }
    L->fin->suivant=C;
    L->fin=C;
    L->longueur+=1;
    return;
}





//question 2
listeDouble  convert(char *word)
{
	listeDouble  l;
	l.debut=NULL;
	int i=0;
	while(word[i]!='\0')
		{
			ajoutFinD(word[i],&l);
			i++;
		}
	return l;
}
// question 5
char palindrome(listeDouble L)
 {
    celluleDouble * temp1=L.debut;
    celluleDouble * temp2=L.fin;
    unsigned p=(L.longueur)%2;
    int i=0;
    


    for (i=0;i<p;i++)
    {
        if (temp1->element!=temp2->element)
            return false;
        else
        {
            temp1=temp1->suivant;
            temp2=temp2->precedent;
            
            
        }
    }
    return true;

 }
