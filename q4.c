#include <stdio.h>

int main(void)
{
	float temperature[3][3][3];
	int i, j, k;
	float layer_sum[3] = {0};
	float layer_avg[3];
	int hottest_layer_index = 0;
	int hottest_temp_index_x = 0;
	int hottest_temp_index_y = 0;
	int hottest_temp_index_z = 0;
		
	for (i = 0; i < 3; i++)\
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("enter temperature at cordinates (%d , %d , %d): ", i, j, k);
				scanf("%f", &temperature[i][j][k]);
				
				if (temperature[i][j][k] > temperature[hottest_temp_index_x][hottest_temp_index_y][hottest_temp_index_z])
				{
					hottest_temp_index_x = i;
					hottest_temp_index_y = j;
					hottest_temp_index_z = k;
				}
				layer_sum[i] += temperature[i][j][k];
			}
		}
		layer_avg[i] = layer_sum[i] / 9;
		
		if (layer_avg[i] > layer_avg[hottest_layer_index])
		{
			hottest_layer_index = i;
		}
	}

	printf("\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("average of layer %d: %0.1f\n", i, layer_avg[i]); 
	}
	printf("\nhottest layer: %d, with an average temperature of: %0.1f\n", hottest_layer_index + 1, layer_avg[hottest_layer_index]);
	printf("maximum temperature: %0.1f, at cordinates (%d, %d, %d)\n", temperature[hottest_temp_index_x][hottest_temp_index_y][hottest_temp_index_z], hottest_temp_index_x, hottest_temp_index_y, hottest_temp_index_z);
}
