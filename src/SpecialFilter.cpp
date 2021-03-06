//
//  SpecialFilter.cpp
//  Copyright (c) 2015 Christian Wohlwend.

#include "Filter.h" 
#include "SpecialFilter.h"
#include "PhotoShop.h"
#include "ColorData.h"
#include "PixelBuffer.h"
#include "Kernel.h"
#include <iostream>
using std::cout;
using std::endl;

SpecialFilter::SpecialFilter() 
{

}
void SpecialFilter::buildKernel(PixelBuffer* buffer)
{
    Kernel m_kernel;
    cout<<"Starting kernel init"<<endl;
    m_kernel.initSize(3);
    cout<<"kennel init at size 3"<<endl;
    m_kernel.setCenterValue(11);
    cout<<"Set center value to 8"<<endl;
    m_kernel.replaceZeros(-1);
    cout<<"replaced Zeros"<<endl;
    m_kernel.printKernel();
    cout<<"kernel successfully built, onto applying filter"<<endl;
    Filter::applyFilter(buffer, m_kernel);
}
void SpecialFilter::buildFilter(PixelBuffer* buffer)
{
    cout<<"still in DetectEdges"<<endl;
    
}

std::string SpecialFilter::getName() 
{
	return "DetectEdges";
}