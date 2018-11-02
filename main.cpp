/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <mwingrov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:34:49 by mwingrov          #+#    #+#             */
/*   Updated: 2018/10/25 12:10:09 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "entities.hpp"
#include <GLFW/glfw3.h>

int main()
{
    glfwinit();
    glfwOpenWindowHint(GLFW_WINDOW_NO_RESIZE, GL_TRUE);
    glfwOpenWindow(800 * 16 / 9, 800, 8, 8, 8, 0, 0, GLFW_WINDOW);
    while (1)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers();
    }
    return (0);
}