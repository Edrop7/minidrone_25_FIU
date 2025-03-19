function BWimage = trueBinarizeSquareImage(image)

% returns the center 80x80 pixels as a truth array
image = image(21:100, 41:120);
imageGrey = im2gray(image);
BWimage = imbinarize(imageGrey);
