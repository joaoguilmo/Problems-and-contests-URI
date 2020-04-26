select products.name,providers.name 
from products
INNER join providers
on products.id_providers = providers.id
where products.id_categories = 6;