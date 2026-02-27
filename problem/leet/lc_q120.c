int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    for (int i=triangleSize-2;i>=0;i--){
        for (int j=0;j<triangleColSize[i];j++){
            int b1=triangle[i+1][j];
            int b2=triangle[i+1][j+1];
            triangle[i][j]+=(b1<b2?b1:b2);
        }
    }
    return triangle[0][0];
}
