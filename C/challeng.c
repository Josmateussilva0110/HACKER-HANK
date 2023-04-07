#include <stdio.h>


int findMedian(int arr_count, int *arr);
void insercao(int *v, int n);
int main()
{
    int q, i, r;
    scanf("%d",&q);
    int vet[q];
    for(i = 0; i < q; i++)
    {
        scanf("%d",&vet[i]);
    }
    r = findMedian(q, vet); 
    printf("%d\n",r);

}
int findMedian(int arr_count, int *arr) 
{
    int i, media, valor;
    insercao(arr, arr_count);
    media = arr_count / 2;
    for(i = 0; i < arr_count; i++)
    {
        if(i == media)
            valor = arr[i];
    }
    return valor;
}
void insercao(int *v, int n)
{
	int i, j;
	int aux;
	for(i = 1; i < n; i++)
	{
		aux = v[i];
		j = i - 1;
		while((j >= 0) && (aux < v[j]))
		{
			v[j+1]= v[j];
			j--;
		}
		v[j+1] = aux;
	}
}