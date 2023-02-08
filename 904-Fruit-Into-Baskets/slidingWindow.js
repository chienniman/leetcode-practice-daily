var totalFruit = function(fruits) {
    let basket = {};
    let left = 0, right = 0;
    
    for (right = 0; right < fruits.length; ++right) {
        basket[fruits[right]]=(basket[fruits[right]] || 0)+1;
        if (Object.keys(basket).length > 2) {
            basket[fruits[left]]--;
        if (basket[fruits[left]] === 0) {
            delete basket[fruits[left]];
        }
        left++;
        }
    }
    return right - left;
};