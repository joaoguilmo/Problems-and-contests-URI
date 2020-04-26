select categories.name , sum(products.amount)
from products
inner join categories
on categories.id = products.id_categories
group by categories.name;