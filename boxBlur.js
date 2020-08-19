function boxBlur(image) {
    var outputImage = []
    
    for (var j = 1; j <= image.length - 2; j++){ //image.length - 2 is the number of output image's rows
        outputImage[j-1] = []
        for (var i = 1; i <= image[0].length - 2; i++){ //image.length - 2 is the number of output image's culumns
            outputImage[j-1][i-1] = Math.floor((image[j-1][i-1] + image[j-1][i] + image[j-1][i+1] + image[j][i-1] + image[j][i] + image[j][i+1] + image[j+1][i-1] + image[j+1][i] + image[j+1][i+1])/9)
        }
    }
    return outputImage
}
