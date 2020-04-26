select name, round((salary*.1),2) as tax
from people
where salary >3000;