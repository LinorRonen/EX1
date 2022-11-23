#include <stdio.h>
#include "NumClass.h"

int main()
{
	int oneN, twoN;
	scanf("%d%d", &oneN, &twoN);

	printf("The all prime numbers: ");
	for(int i=oneN; i<=twoN;i++){
		if(isPrime(i)){
			printf("%d ",i);
		}
	}

	printf("\nThe all armstrong numbers: ");
	for(int i=oneN; i<=twoN;i++){
		if(isArmstrong(i)){
			printf("%d ",i);
		}     
	}

	printf("\nThe all strong numbers: ");
	for(int i=oneN; i<=twoN;i++){
		if(isStrong(i)){
			printf("%d ",i);
		}    
	}

	printf("\nThe all palindrome numbers: ");
	for(int i=oneN; i<=twoN;i++){
		if(isPalindrome(i)){
			printf("%d ",i);
		}    
	}

	printf("\n");
	return 0;
}