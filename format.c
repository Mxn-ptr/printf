format_t *new_format()
{
	format_t choice[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	return (choice);
}
