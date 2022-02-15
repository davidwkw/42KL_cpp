/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:58:29 by kwang             #+#    #+#             */
/*   Updated: 2022/02/15 18:58:30 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

# define UTILS_HPP
# include <cctype>
# include <string>

bool		is_string_ws(const std::string str);
std::string ft_str_resize(const std::string str, size_t max_size, char c);

#endif
