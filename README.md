# ft_printf

conversion gérées 	: cspdiuxX%
flags gérés			: 0-.* taille de champ minimale

conversion functions :
	w_c_conv()		: int to unsigned char
	w_char37_conv()	: print '%'
	w_d_conv()		: int
	w_i_conv()		: int
	w_p_conv()		: pointer address
	w_s_conv()		: string
	w_u_conv()		: unsigned int
	w_xl_conv()		: int to hexadecimal lowercase
	w_xu_conv()		: int to hexadecimal uppercase

flag functions : (handle different behavior for each converter)
	precision()
	default_field_width()
	fw_zero()
	fw_less()

flag/format setting functions :
	fset_init()			: initialize struct t_format members to default value
	fset_precision()	: precision setting rules, adds F_PRECISION flag, sets value
		ex : precision can't be a negative value
	fset_field_width()	: fw setting rules, adds F_FIELD_WIDTH flag, sets value
		ex : field_width can't be set if precision has been set before
	fset_zero()			: flag setting rules, adds F_ZERO flag, sets value
		ex : f_zero flag can't be set if field_width is already set
	fset_less()			: flag setting rules, adds F_LESS flag, sets value
		ex : f_less cancel f_zero when set


						ft_printf
							|
						print_string -- super_putstr
						|		  |
				 format_set	    format_arg
				 	|				|
			fset functions		conversion functions
			FLAGS array			CONVERTERS array
								flag functions F_* macros array


format_arg() : functions in g_conversion_functions array appears in the same order as the characters in CONVERTERS macro.
				functions in g_flag_functions array appears in the same order as the macros in flag_bmask_values array.
format_set() : functions in g_format_set_functions appears in the same order as the characters in the FLAGS macro.
