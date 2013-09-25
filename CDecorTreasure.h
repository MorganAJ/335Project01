/*!
 * \file CDecorTreasure.h
 *
 * \author David Warner
 */

#pragma once
#ifndef CDECORTREASURE_H
#define	CDECORTREASURE_H

#include "CItem.h"

//! Class that implements a fish of type Treasure
class CDecorTreasure : public CItem
{
public:
    CDecorTreasure(CAquarium *aquarium);

    virtual ~CDecorTreasure();
    
    //! \brief Test if this item is a Treasure Decor
    //! \returns true if it is
    virtual bool IsTreasureDecor() const {return true;}
    
    wxXmlNode *XmlSave();
    
    CItem *Clone();
    
private:
    //! Default constructor (disabled)
    CDecorTreasure();

    //! Copy constructor (disabled)
    CDecorTreasure(const CDecorTreasure &);    
};

#endif	/* CDECORTREASURE_H */
