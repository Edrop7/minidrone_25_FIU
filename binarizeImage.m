function BWimage = binarizeImage(image)

%converts image to binary, returns it as an integer array, not a truth array
imageGrey = im2gray(image);
BWimage = imbinarize(imageGrey) .* 255;

