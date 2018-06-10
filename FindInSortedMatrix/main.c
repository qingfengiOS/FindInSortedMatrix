//
//  main.c
//  FindInSortedMatrix
//
//  Created by liyiping on 2018/6/10.
//  Copyright © 2018年 情风. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>


/**
 在有顺序的二维数组中查找指定值

 @param matrix 二维数组
 @param rows 二维数组行数
 @param cloumns 二维数组列数
 @param number 目标值
 @return 查找结果
 */
bool Findvalue(int* matrix, int rows, int cloumns, int number) {
    
    bool found = false;
    
    if (matrix != NULL && rows > 0 && cloumns > 0) {
        int row = 0;
        int cloumn = cloumns - 1;
        while (row < rows && cloumn >= 0) {
            if (matrix[row * cloumns + cloumn] == number) {
                found = true;
                break;
            } else if (matrix[row * cloumns + cloumn] > number) {
                -- cloumn;
            } else {
                ++ row;
            }
        }
    }
    
    return found;
    
}


int main(int argc, const char * argv[]) {
    
    int matrix[4][4] = {1, 2, 8, 9, 2, 4, 9, 12,4, 7, 10, 13,6, 8, 11, 15};
    
    bool result = Findvalue(matrix, 4, 4, 7);
    if (result) {
        printf("finded ");
    } else {
        printf("not find ");
    }
    
    return 0;
}


