select customers.name, orders.id
from customers
inner join orders
on orders.id_customers = customers.id
where orders.orders_date < '20160630';