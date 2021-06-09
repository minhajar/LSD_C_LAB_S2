int main(int ac, char ** av)
{
	printf("%d\n",ac);
	printf("%s\n", av[1]); //display the string from the user
	listeDouble L=convert(av[1]);// converting the string into the list
	affichageListeDouble(L);
	int R=palindrome(L);// testing if it s a palindrome
	printf("%d\n",R);  
	
        // display each caracter in the string  
	int i=1;
	while(i<ac)
	{
		int j=0;
		while(av[i][j]!='\0')
			{
			printf("%c\n",av[i][j]);
			j++;
			}
			printf("-------\n");
			i++;
	}
        return 0;
	
}
