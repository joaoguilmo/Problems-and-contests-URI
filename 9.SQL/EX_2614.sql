  select customers.name, rentals.rentals_date
from customers
inner join rentals
on customers.id = rentals.id_customers
where EXTRACT(MONTH FROM rentals.rentals_date) = '9' AND EXTRACT(YEAR FROM rentals.rentals_date) = '2016';
