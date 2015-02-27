/**
* Copyright (C) 2013 Axios, Inc.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef REALPART_IMPL_H
#define REALPART_IMPL_H
#define COMPLEX tmp->SRI.mode

#include "RealPart_base.h"
using std::vector;
using std::complex;

class RealPart_i : public RealPart_base
{
    ENABLE_LOGGING
    public:
        RealPart_i(const char *uuid, const char *label);
        ~RealPart_i();
        int serviceFunction();
    private:
        vector<float> data;
        vector<float>::iterator it;
};

#endif // REALPART_IMPL_H
