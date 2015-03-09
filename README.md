# Real Part Component

This component takes an input that is either purely real or complex and outputs the real part of the data. If the data passed in is purely real, it is passed through the component unaltered. If the data is complex, the imaginary portion of the data is eliminated and the real part is passed through.

## Building & Installation
    ./reconf
    ./configure
    make -j
    sudo make install

## Notes

This component takes a float as input and produces a float as output. A check is included in the component to ensure that, given data that is comples, only data which contains an even number of elements is allowed to be processed.

## Copyrights

This work is protected by Copyright. Copyright information is included on all files within the component.

## Liscense

The Real Part Component is licensed under the Lesser GNU General Public License (LGPL).

