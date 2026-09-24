/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DB2Metadata_h__
#define DB2Metadata_h__

#include "DB2Meta.h"

struct AchievementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1260179, 3, 15, 15, 0x657EBFFB, fields, 11);
        return &instance;
    }
};

struct Achievement_CategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1324299, 1, 4, 4, 0x67B2B4BD, fields, 3);
        return &instance;
    }
};

struct AdventureJournalMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 2, false },
            { FT_BYTE, 2, false },
        };
        static constexpr DB2Meta instance(1115949, -1, 22, 22, 0x2EAEAECC, fields, -1);
        return &instance;
    }
};

struct AdventureMapPOIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_FLOAT, 2, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1267070, -1, 12, 12, 0x8672E9D5, fields, -1);
        return &instance;
    }
};

struct AlliedRaceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1710672, 0, 8, 8, 0xD60FC8BF, fields, -1);
        return &instance;
    }
};

struct AlliedRaceRacialAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1720145, -1, 5, 4, 0x0F2AA8B5, fields, 4);
        return &instance;
    }
};

struct AnimKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1304323, -1, 3, 3, 0xDA4C91AF, fields, -1);
        return &instance;
    }
};

struct AnimKitBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1375433, -1, 5, 5, 0x94F5DA04, fields, -1);
        return &instance;
    }
};

struct AnimKitBoneSetAliasMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266937, -1, 2, 2, 0x19A6986C, fields, -1);
        return &instance;
    }
};

struct AnimKitConfigMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1300872, -1, 1, 1, 0x140718EF, fields, -1);
        return &instance;
    }
};

struct AnimKitConfigBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1300873, -1, 3, 2, 0x482E3ED3, fields, 2);
        return &instance;
    }
};

struct AnimKitPriorityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266540, -1, 1, 1, 0xCCF889D8, fields, -1);
        return &instance;
    }
};

struct AnimKitReplacementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1559807, 0, 5, 4, 0x84858A44, fields, 4);
        return &instance;
    }
};

struct AnimKitSegmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1304324, -1, 18, 18, 0x748C966C, fields, 0);
        return &instance;
    }
};

struct AnimReplacementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1301100, 0, 5, 4, 0x6D1FB51C, fields, 4);
        return &instance;
    }
};

struct AnimReplacementSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1284817, -1, 1, 1, 0x7C047695, fields, -1);
        return &instance;
    }
};

struct AnimaCableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[35] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3286805, -1, 35, 35, 0xC7843A94, fields, -1);
        return &instance;
    }
};

struct AnimaCylinderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3286804, -1, 7, 7, 0x351564A7, fields, -1);
        return &instance;
    }
};

struct AnimaMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[31] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(3153990, -1, 31, 31, 0xF1514DA2, fields, -1);
        return &instance;
    }
};

struct AnimationDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1375431, -1, 4, 4, 0xBBF66A3C, fields, -1);
        return &instance;
    }
};

struct AoiBoxMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2140223, -1, 5, 4, 0xBDA8526F, fields, 4);
        return &instance;
    }
};

struct AreaConditionalDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2123730, 1, 6, 5, 0xAEE182C6, fields, 5);
        return &instance;
    }
};

struct AreaFarClipOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1537162, -1, 4, 4, 0x5EF657BC, fields, -1);
        return &instance;
    }
};

struct AreaGroupMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1093406, -1, 2, 1, 0x6746D145, fields, 1);
        return &instance;
    }
};

struct AreaPOIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1000630, 2, 18, 18, 0x91335BF1, fields, 12);
        return &instance;
    }
};

struct AreaPOIStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1000631, -1, 5, 4, 0x60943110, fields, 4);
        return &instance;
    }
};

struct AreaTableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
            { FT_SHORT, 4, false },
        };
        static constexpr DB2Meta instance(1353545, -1, 23, 23, 0x705C911D, fields, -1);
        return &instance;
    }
};

struct AreaTriggerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1354401, 2, 16, 16, 0xA43DBF42, fields, 3);
        return &instance;
    }
};

struct AreaTriggerActionSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1352378, -1, 1, 1, 0x6D5EB3BD, fields, -1);
        return &instance;
    }
};

struct AreaTriggerBoxMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(1332554, -1, 1, 1, 0xC934FE5D, fields, -1);
        return &instance;
    }
};

struct AreaTriggerCreatePropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1937227, -1, 3, 3, 0xAEDFD657, fields, -1);
        return &instance;
    }
};

struct AreaTriggerCylinderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121943, -1, 3, 3, 0xC54F3688, fields, -1);
        return &instance;
    }
};

struct AreaTriggerSphereMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1315630, -1, 1, 1, 0xB851EBF6, fields, -1);
        return &instance;
    }
};

struct ArenaCcItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3849793, 0, 3, 2, 0x4C5721FD, fields, 2);
        return &instance;
    }
};

struct ArmorLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1284818, -1, 5, 5, 0xFB67352F, fields, -1);
        return &instance;
    }
};

struct AuctionHouseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1237439, -1, 4, 4, 0x9D007DB2, fields, -1);
        return &instance;
    }
};

struct AuctionHouseCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4366440, 2, 9, 8, 0x034AADE3, fields, 8);
        return &instance;
    }
};

struct BankBagSlotPricesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1284819, -1, 1, 1, 0xDBCA3459, fields, -1);
        return &instance;
    }
};

struct BannedAddonsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1373459, -1, 3, 3, 0x56583F69, fields, -1);
        return &instance;
    }
};

struct BarberShopStyleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1237437, 2, 8, 8, 0x65EF4799, fields, -1);
        return &instance;
    }
};

struct BattlePetAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(841610, -1, 7, 7, 0x1C738742, fields, -1);
        return &instance;
    }
};

struct BattlePetAbilityEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 6, true },
        };
        static constexpr DB2Meta instance(801575, 0, 7, 7, 0x221D1FE6, fields, 1);
        return &instance;
    }
};

struct BattlePetAbilityStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801576, -1, 3, 2, 0x3381AC8D, fields, 2);
        return &instance;
    }
};

struct BattlePetAbilityTurnMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801577, 0, 6, 6, 0x20C3BE16, fields, 1);
        return &instance;
    }
};

struct BattlePetBreedQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801578, -1, 3, 3, 0xF3E3FDFC, fields, -1);
        return &instance;
    }
};

struct BattlePetBreedStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801579, -1, 3, 2, 0x0DA4A2A5, fields, 2);
        return &instance;
    }
};

struct BattlePetDisplayOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1802988, -1, 4, 4, 0x8F75CC44, fields, -1);
        return &instance;
    }
};

struct BattlePetEffectPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 6, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 6, false },
        };
        static constexpr DB2Meta instance(801580, -1, 3, 3, 0xED4FBC95, fields, -1);
        return &instance;
    }
};

struct BattlePetNPCTeamMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(841648, -1, 1, 1, 0x782EE721, fields, -1);
        return &instance;
    }
};

struct BattlePetSpeciesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(841622, 2, 11, 11, 0xE306EEEA, fields, -1);
        return &instance;
    }
};

struct BattlePetSpeciesStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801581, -1, 3, 2, 0x5999BD05, fields, 2);
        return &instance;
    }
};

struct BattlePetSpeciesXAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801582, -1, 4, 3, 0x69104208, fields, 3);
        return &instance;
    }
};

struct BattlePetStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801583, -1, 3, 3, 0x489B22AD, fields, -1);
        return &instance;
    }
};

struct BattlePetVisualMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801584, -1, 7, 7, 0x9B125C9E, fields, -1);
        return &instance;
    }
};

struct BattlemasterListMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1360265, -1, 18, 18, 0x6B719279, fields, -1);
        return &instance;
    }
};

struct BattlemasterListXMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(5916746, -1, 2, 1, 0x449D9C1C, fields, 1);
        return &instance;
    }
};

struct BeamEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1525607, -1, 10, 10, 0x26B15341, fields, -1);
        return &instance;
    }
};

struct BoneWindModifierModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1467254, -1, 2, 2, 0xF84A16EF, fields, 0);
        return &instance;
    }
};

struct BoneWindModifiersMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1416756, -1, 2, 2, 0x2CD1770E, fields, -1);
        return &instance;
    }
};

struct BonusRollMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1983274, -1, 4, 4, 0x567FCB5C, fields, -1);
        return &instance;
    }
};

struct BountyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1367866, -1, 5, 4, 0x218C9656, fields, 4);
        return &instance;
    }
};

struct BountySetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1367865, -1, 2, 2, 0xE32AA927, fields, -1);
        return &instance;
    }
};

struct BroadcastTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, false },
            { FT_SHORT, 3, false },
            { FT_SHORT, 3, false },
        };
        static constexpr DB2Meta instance(841604, 2, 12, 12, 0x2527CC73, fields, -1);
        return &instance;
    }
};

struct CameraEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1117695, -1, 1, 1, 0x1B09C75D, fields, -1);
        return &instance;
    }
};

struct CameraEffectEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1117696, -1, 16, 15, 0x2B6832AA, fields, 15);
        return &instance;
    }
};

struct CameraModeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343308, -1, 12, 12, 0x2AD4ECDE, fields, -1);
        return &instance;
    }
};

struct CampaignMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(2031607, 2, 6, 6, 0x3ABB9FCC, fields, -1);
        return &instance;
    }
};

struct CampaignXConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2031611, -1, 3, 2, 0x59F4979F, fields, 2);
        return &instance;
    }
};

struct CampaignXQuestLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(2036722, -1, 3, 3, 0x703CADAB, fields, 0);
        return &instance;
    }
};

struct CastableRaidBuffsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1283018, -1, 2, 1, 0x63E1AEB7, fields, 1);
        return &instance;
    }
};

struct CelestialBodyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1592470, 1, 15, 15, 0x9A9DA61C, fields, -1);
        return &instance;
    }
};

struct Cfg_CategoriesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1068162, -1, 6, 6, 0x8710BE94, fields, -1);
        return &instance;
    }
};

struct Cfg_ConfigsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1080949, -1, 4, 4, 0xE7594137, fields, -1);
        return &instance;
    }
};

struct Cfg_RegionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1082876, -1, 6, 6, 0xFB9CBD8A, fields, -1);
        return &instance;
    }
};

struct CharBaseInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1343386, -1, 2, 2, 0x781A2640, fields, -1);
        return &instance;
    }
};

struct CharBaseSectionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1375798, -1, 3, 3, 0x923256FE, fields, -1);
        return &instance;
    }
};

struct CharComponentTextureLayoutsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1360262, -1, 2, 2, 0x9CA2CFB4, fields, -1);
        return &instance;
    }
};

struct CharComponentTextureSectionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1360263, -1, 7, 7, 0x2173BA71, fields, 0);
        return &instance;
    }
};

struct CharHairGeosetsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1256914, -1, 10, 10, 0x0DFA0F80, fields, 0);
        return &instance;
    }
};

struct CharSectionConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2388725, -1, 6, 5, 0x04C96A6C, fields, 5);
        return &instance;
    }
};

struct CharShipmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(972425, -1, 9, 9, 0xFF41E21A, fields, 0);
        return &instance;
    }
};

struct CharShipmentContainerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(972405, -1, 16, 16, 0xC5BCDA8C, fields, -1);
        return &instance;
    }
};

struct CharStartOutfitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 24, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1237591, -1, 7, 6, 0xDB39675A, fields, 6);
        return &instance;
    }
};

struct CharTitlesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1349054, -1, 4, 4, 0x2F5DFF7F, fields, -1);
        return &instance;
    }
};

struct CharacterFacialHairStylesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 5, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1369752, -1, 4, 4, 0x7D8B51FB, fields, -1);
        return &instance;
    }
};

struct CharacterLoadoutMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1344281, 0, 5, 5, 0xCE2DBDAF, fields, -1);
        return &instance;
    }
};

struct CharacterLoadoutItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1302846, -1, 2, 2, 0x0C7A1862, fields, 0);
        return &instance;
    }
};

struct CharacterServiceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1815417, -1, 13, 13, 0x7DEDBFA6, fields, -1);
        return &instance;
    }
};

struct ChatChannelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345278, 2, 6, 6, 0x20E8D278, fields, -1);
        return &instance;
    }
};

struct ChatProfanityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1117084, -1, 2, 2, 0x7EACA150, fields, -1);
        return &instance;
    }
};

struct ChrClassRaceSexMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1306188, -1, 6, 6, 0x0FB99891, fields, -1);
        return &instance;
    }
};

struct ChrClassTitleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1267497, -1, 3, 3, 0xC086F95D, fields, -1);
        return &instance;
    }
};

struct ChrClassUIDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1316515, -1, 3, 3, 0x50F5AD66, fields, -1);
        return &instance;
    }
};

struct ChrClassVillainMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1267498, -1, 3, 3, 0x46041630, fields, -1);
        return &instance;
    }
};

struct ChrClassesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[43] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1361031, 29, 43, 43, 0xAFC9B0C2, fields, -1);
        return &instance;
    }
};

struct ChrClassesXPowerTypesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1121420, -1, 2, 1, 0x70DA1F8C, fields, 1);
        return &instance;
    }
};

struct ChrCustClientChoiceConversionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3590348, 0, 4, 3, 0x8ED0FBED, fields, 3);
        return &instance;
    }
};

struct ChrCustItemGeoModifyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3952714, -1, 3, 3, 0x2986E1F3, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1611874, -1, 7, 6, 0x2FBC8BC5, fields, 6);
        return &instance;
    }
};

struct ChrCustomizationBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3460181, -1, 2, 2, 0xCC2CFF6E, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3526439, -1, 7, 7, 0x7617515B, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationChoiceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(3450554, 1, 11, 11, 0x9559C358, fields, 2);
        return &instance;
    }
};

struct ChrCustomizationCondModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(3460182, -1, 2, 2, 0x601A4522, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationConversionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3463337, -1, 8, 8, 0x98D50CBD, fields, 4);
        return &instance;
    }
};

struct ChrCustomizationDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3593032, 0, 6, 6, 0x9BA35F7B, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationElementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3512765, 0, 14, 14, 0xD68DCDEA, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationGeosetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3456171, -1, 3, 3, 0xBF55F2FB, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3459652, 0, 3, 3, 0xE61F7A35, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationOptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3384247, 1, 12, 12, 0xEF4B96C5, fields, 4);
        return &instance;
    }
};

struct ChrCustomizationReqMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(3450453, 1, 10, 10, 0xBAA785F6, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationReqChoiceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3580359, -1, 2, 1, 0xF925BC6F, fields, 1);
        return &instance;
    }
};

struct ChrCustomizationSkinnedModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3460183, -1, 5, 5, 0x4C32AA8A, fields, -1);
        return &instance;
    }
};

struct ChrModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3384313, 2, 17, 17, 0x03FAB755, fields, 4);
        return &instance;
    }
};

struct ChrModelMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3566562, 0, 7, 7, 0x22469480, fields, 1);
        return &instance;
    }
};

struct ChrModelTextureLayerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3548976, 0, 10, 9, 0x31F57E28, fields, 9);
        return &instance;
    }
};

struct ChrRaceXChrModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3490304, -1, 4, 4, 0xA203BC29, fields, 0);
        return &instance;
    }
};

struct ChrRacesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[57] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, false },
            { FT_INT, 3, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1305311, -1, 57, 57, 0x47A2E62F, fields, -1);
        return &instance;
    }
};

struct ChrSpecializationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1343390, 3, 13, 13, 0xDAB4CA4B, fields, 4);
        return &instance;
    }
};

struct ChrUpgradeBucketMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(984529, 0, 3, 2, 0x0FFDE299, fields, 2);
        return &instance;
    }
};

struct ChrUpgradeBucketSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(984528, -1, 2, 1, 0x666AF1D3, fields, 1);
        return &instance;
    }
};

struct ChrUpgradeTierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(984530, 1, 4, 4, 0xA0CEF7CA, fields, -1);
        return &instance;
    }
};

struct CinematicCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1294214, -1, 4, 4, 0xF96842A0, fields, -1);
        return &instance;
    }
};

struct CinematicSequencesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1134583, -1, 2, 2, 0x07D874FF, fields, -1);
        return &instance;
    }
};

struct ClientSceneEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1939843, -1, 1, 1, 0xF3B2D340, fields, -1);
        return &instance;
    }
};

struct CloakDampeningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 5, true },
            { FT_FLOAT, 5, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1465903, -1, 7, 7, 0x4D53C04B, fields, -1);
        return &instance;
    }
};

struct CloneEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2175218, -1, 8, 8, 0x65C255A4, fields, -1);
        return &instance;
    }
};

struct CombatConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 2, false },
            { FT_SHORT, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 2, false },
        };
        static constexpr DB2Meta instance(1120958, -1, 11, 11, 0xE4823C69, fields, -1);
        return &instance;
    }
};

struct CommentatorIndirectSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(3067644, -1, 3, 2, 0x63CDB0D7, fields, 2);
        return &instance;
    }
};

struct CommentatorStartLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1664251, -1, 2, 2, 0x8EA27BA8, fields, -1);
        return &instance;
    }
};

struct CommentatorTrackedCooldownMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1661584, -1, 4, 3, 0xB95A106E, fields, 3);
        return &instance;
    }
};

struct CommunityIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2098645, 0, 3, 3, 0x9E7BAA93, fields, -1);
        return &instance;
    }
};

struct ComponentModelFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1349053, -1, 4, 4, 0xAD90D87A, fields, -1);
        return &instance;
    }
};

struct ComponentTextureFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1278239, -1, 3, 3, 0xB32B030A, fields, -1);
        return &instance;
    }
};

struct ConfigurationWarningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1709409, -1, 2, 2, 0x0D8BF833, fields, -1);
        return &instance;
    }
};

struct ContentTuningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1962930, 0, 14, 14, 0x6AF566BE, fields, -1);
        return &instance;
    }
};

struct ContributionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(1587153, 2, 7, 7, 0x167173C3, fields, 3);
        return &instance;
    }
};

struct ContributionStyleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2143633, -1, 7, 7, 0x045BF734, fields, -1);
        return &instance;
    }
};

struct ContributionStyleContainerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(2143634, -1, 1, 1, 0x8879F685, fields, -1);
        return &instance;
    }
};

struct ConversationLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1260801, -1, 8, 8, 0x0F1FE894, fields, -1);
        return &instance;
    }
};

struct CreatureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 4, true },
            { FT_FLOAT, 4, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(841631, -1, 11, 11, 0x6E14C900, fields, -1);
        return &instance;
    }
};

struct CreatureDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 9, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(879282, -1, 7, 6, 0x17241F36, fields, 6);
        return &instance;
    }
};

struct CreatureDispXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1146692, -1, 2, 2, 0xA5E810E7, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[26] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(1108759, 0, 26, 26, 0xF75F884C, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoCondMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 4, true },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1332686, 0, 8, 7, 0xB0E544B6, fields, 7);
        return &instance;
    }
};

struct CreatureDisplayInfoCondXChoiceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3670439, -1, 2, 2, 0x8AB1D7E8, fields, 0);
        return &instance;
    }
};

struct CreatureDisplayInfoEvtMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1586882, -1, 4, 3, 0x014CFB2A, fields, 3);
        return &instance;
    }
};

struct CreatureDisplayInfoExtraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 3, false },
        };
        static constexpr DB2Meta instance(1264997, 0, 13, 13, 0xF5E49981, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoGeosetDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1720141, -1, 3, 2, 0x5E539080, fields, 2);
        return &instance;
    }
};

struct CreatureDisplayInfoOptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3692043, -1, 3, 2, 0x2F331C33, fields, 2);
        return &instance;
    }
};

struct CreatureDisplayInfoTrnMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1146698, -1, 6, 5, 0xD3A7F438, fields, 5);
        return &instance;
    }
};

struct CreatureFamilyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 2, true },
        };
        static constexpr DB2Meta instance(1351351, -1, 10, 10, 0x7FE3CBA7, fields, -1);
        return &instance;
    }
};

struct CreatureImmunitiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 12, false },
            { FT_INT, 20, false },
        };
        static constexpr DB2Meta instance(1131322, -1, 9, 9, 0xC8D8DB6E, fields, -1);
        return &instance;
    }
};

struct CreatureModelDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[32] =
        {
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1365368, -1, 32, 32, 0x3FFEE408, fields, -1);
        return &instance;
    }
};

struct CreatureMovementInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1125666, -1, 1, 1, 0x30A3C9CA, fields, -1);
        return &instance;
    }
};

struct CreatureSoundDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[39] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 5, false },
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1344466, 0, 39, 39, 0xE5EE765B, fields, -1);
        return &instance;
    }
};

struct CreatureSoundFidgetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4178576, -1, 3, 2, 0x9BDF9BD7, fields, 2);
        return &instance;
    }
};

struct CreatureSpellDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 4, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(3032554, -1, 2, 2, 0x9189AF29, fields, -1);
        return &instance;
    }
};

struct CreatureTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1131315, -1, 2, 2, 0x6FF4CA42, fields, -1);
        return &instance;
    }
};

struct CreatureXContributionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1587158, 0, 3, 2, 0x8EAB9EE3, fields, 2);
        return &instance;
    }
};

struct CreatureXDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1864302, -1, 6, 5, 0x2EA19FCF, fields, 5);
        return &instance;
    }
};

struct CriteriaMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1263817, 0, 12, 12, 0xB06E4073, fields, -1);
        return &instance;
    }
};

struct CriteriaTreeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1263818, -1, 7, 7, 0xFF97AE12, fields, -1);
        return &instance;
    }
};

struct CriteriaTreeXEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345969, -1, 2, 1, 0xA95C5FCA, fields, 1);
        return &instance;
    }
};

struct CurrencyCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1125667, -1, 3, 3, 0x12EB5F37, fields, -1);
        return &instance;
    }
};

struct CurrencyContainerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1934603, -1, 8, 7, 0xA5E771CA, fields, 7);
        return &instance;
    }
};

struct CurrencyTypesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1095531, -1, 15, 15, 0x3099E4BD, fields, -1);
        return &instance;
    }
};

struct CurveMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(892585, 0, 3, 3, 0xD362535A, fields, -1);
        return &instance;
    }
};

struct CurvePointMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(892586, 2, 5, 5, 0x7D4954A1, fields, 3);
        return &instance;
    }
};

struct DeathThudLookupsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1279415, -1, 4, 4, 0xB84E88F2, fields, -1);
        return &instance;
    }
};

struct DecalPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[19] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1278176, 0, 19, 19, 0x8A7318FE, fields, -1);
        return &instance;
    }
};

struct DeclinedWordMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279100, 1, 2, 2, 0x104E18EF, fields, -1);
        return &instance;
    }
};

struct DeclinedWordCasesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279099, -1, 3, 2, 0x24277AA1, fields, 2);
        return &instance;
    }
};

struct DestructibleModelDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1122116, -1, 22, 22, 0xC0CB9712, fields, -1);
        return &instance;
    }
};

struct DeviceBlacklistMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(922722, -1, 2, 2, 0xABA94CC1, fields, -1);
        return &instance;
    }
};

struct DifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1352127, -1, 14, 14, 0x61D303B1, fields, -1);
        return &instance;
    }
};

struct DissolveEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[21] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1304325, -1, 21, 21, 0x511A28B7, fields, -1);
        return &instance;
    }
};

struct DriverBlacklistMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(922720, -1, 7, 7, 0x2AE0CE7C, fields, -1);
        return &instance;
    }
};

struct DungeonEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1347279, 1, 10, 10, 0x4391989A, fields, 2);
        return &instance;
    }
};

struct DurabilityCostsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 21, false },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1283019, -1, 2, 2, 0x917714A1, fields, -1);
        return &instance;
    }
};

struct DurabilityQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1130268, -1, 1, 1, 0x08763C54, fields, -1);
        return &instance;
    }
};

struct EdgeGlowEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1387381, -1, 13, 13, 0xEBFB39E3, fields, -1);
        return &instance;
    }
};

struct EmotesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1343602, -1, 9, 9, 0x0A598B68, fields, -1);
        return &instance;
    }
};

struct EmotesTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1347273, -1, 2, 2, 0xCCDBFBAF, fields, -1);
        return &instance;
    }
};

struct EmotesTextDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1283024, -1, 3, 2, 0x62B26C79, fields, 2);
        return &instance;
    }
};

struct EmotesTextSoundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1286524, -1, 5, 4, 0x3ECA1BE0, fields, 4);
        return &instance;
    }
};

struct EnvironmentalDamageMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1278398, -1, 2, 2, 0x4B8F9058, fields, -1);
        return &instance;
    }
};

struct ExhaustionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1343313, 2, 8, 8, 0x9FAD46FA, fields, -1);
        return &instance;
    }
};

struct ExpectedStatMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1937326, -1, 12, 11, 0x0FD90F9C, fields, 11);
        return &instance;
    }
};

struct ExpectedStatModMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1969773, -1, 9, 9, 0x8C41CCCE, fields, -1);
        return &instance;
    }
};

struct FactionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[21] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 4, true },
            { FT_SHORT, 4, false },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_FLOAT, 2, true },
            { FT_BYTE, 2, false },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1361972, 2, 21, 21, 0x11322013, fields, -1);
        return &instance;
    }
};

struct FactionGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343595, 2, 6, 6, 0x1587C7D7, fields, -1);
        return &instance;
    }
};

struct FactionTemplateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 8, false },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1361579, -1, 7, 7, 0x22B6DC22, fields, -1);
        return &instance;
    }
};

struct FootprintTexturesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1308056, -1, 3, 3, 0xA762B817, fields, -1);
        return &instance;
    }
};

struct FootstepTerrainLookupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1267647, -1, 4, 4, 0x747D783F, fields, -1);
        return &instance;
    }
};

struct FriendshipRepReactionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1237638, -1, 3, 3, 0xDA471F1D, fields, 1);
        return &instance;
    }
};

struct FriendshipReputationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1237639, 1, 4, 4, 0x7E69A97F, fields, -1);
        return &instance;
    }
};

struct FullScreenEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[28] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1348282, -1, 28, 28, 0xD33A4A55, fields, -1);
        return &instance;
    }
};

struct GMSurveyAnswersMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1283025, -1, 3, 2, 0xA8167E67, fields, 2);
        return &instance;
    }
};

struct GMSurveyCurrentSurveyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1278177, -1, 1, 1, 0x42C33040, fields, -1);
        return &instance;
    }
};

struct GMSurveyQuestionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1278178, -1, 1, 1, 0xA07C5F5C, fields, -1);
        return &instance;
    }
};

struct GMSurveySurveysMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 15, false },
        };
        static constexpr DB2Meta instance(1283020, -1, 1, 1, 0x986268B3, fields, -1);
        return &instance;
    }
};

struct GameClockDebugMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2922072, 0, 2, 2, 0x08DEAF7F, fields, -1);
        return &instance;
    }
};

struct GameObjectArtKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1266737, -1, 2, 2, 0xF1996F13, fields, -1);
        return &instance;
    }
};

struct GameObjectDiffAnimMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1302847, -1, 4, 3, 0x8B5D859A, fields, 3);
        return &instance;
    }
};

struct GameObjectDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1266277, -1, 7, 7, 0x7C5F0B90, fields, -1);
        return &instance;
    }
};

struct GameObjectDisplayInfoXSoundKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345272, -1, 3, 2, 0x70E1497B, fields, 2);
        return &instance;
    }
};

struct GameObjectsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 4, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 8, true },
        };
        static constexpr DB2Meta instance(841620, 3, 13, 13, 0x9E707394, fields, 4);
        return &instance;
    }
};

struct GameTipsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1368021, -1, 4, 4, 0x6C9151E1, fields, -1);
        return &instance;
    }
};

struct GemPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1343604, -1, 3, 3, 0x68ADF6E0, fields, -1);
        return &instance;
    }
};

struct GlobalStringsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1394440, -1, 3, 3, 0xD40F6D96, fields, -1);
        return &instance;
    }
};

struct GlyphBindableSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1270147, -1, 2, 1, 0x8AB55EA9, fields, 1);
        return &instance;
    }
};

struct GlyphExclusiveCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(948546, -1, 1, 1, 0xEB3B0B94, fields, -1);
        return &instance;
    }
};

struct GlyphPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1345274, 0, 6, 6, 0xC9823693, fields, -1);
        return &instance;
    }
};

struct GlyphRequiredSpecMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(948496, -1, 2, 1, 0x7FA14D85, fields, 1);
        return &instance;
    }
};

struct GlyphSlotMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1130095, 0, 3, 3, 0xDF7AFED4, fields, -1);
        return &instance;
    }
};

struct GradientEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2433582, -1, 18, 18, 0xAFB2AC4C, fields, -1);
        return &instance;
    }
};

struct GroundEffectDoodadMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1308057, -1, 4, 4, 0x8394ED59, fields, -1);
        return &instance;
    }
};

struct GroundEffectTextureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 4, false },
            { FT_BYTE, 4, true },
        };
        static constexpr DB2Meta instance(1308499, -1, 4, 4, 0xE77A386D, fields, -1);
        return &instance;
    }
};

struct GroupFinderActivityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[20] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(974813, -1, 20, 20, 0xC3DB15C2, fields, -1);
        return &instance;
    }
};

struct GroupFinderActivityGrpMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(974814, -1, 2, 2, 0xB3F025D8, fields, -1);
        return &instance;
    }
};

struct GroupFinderCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(974812, -1, 5, 5, 0x0D5F1625, fields, -1);
        return &instance;
    }
};

struct GuildColorBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1286526, -1, 3, 3, 0x1C82913E, fields, -1);
        return &instance;
    }
};

struct GuildColorBorderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1286527, -1, 3, 3, 0x1C82913E, fields, -1);
        return &instance;
    }
};

struct GuildColorEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1286525, -1, 3, 3, 0x1C82913E, fields, -1);
        return &instance;
    }
};

struct GuildEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2734754, -1, 2, 2, 0x2532676C, fields, -1);
        return &instance;
    }
};

struct GuildPerkSpellsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1135238, -1, 1, 1, 0xC933095D, fields, -1);
        return &instance;
    }
};

struct GuildShirtBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2921008, -1, 4, 3, 0x1DC85F62, fields, 3);
        return &instance;
    }
};

struct GuildShirtBorderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2921475, -1, 5, 4, 0x5363EE75, fields, 4);
        return &instance;
    }
};

struct GuildTabardBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2909769, -1, 4, 3, 0xFA17E913, fields, 3);
        return &instance;
    }
};

struct GuildTabardBorderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2920485, -1, 5, 4, 0x4A8DDE7F, fields, 4);
        return &instance;
    }
};

struct GuildTabardEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2910470, -1, 4, 3, 0x9A3366EF, fields, 3);
        return &instance;
    }
};

struct HeirloomMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 6, true },
            { FT_SHORT, 6, false },
        };
        static constexpr DB2Meta instance(1097696, 1, 10, 10, 0x9ECA649E, fields, -1);
        return &instance;
    }
};

struct HelmetAnimScalingMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1348283, -1, 3, 2, 0xFF7E3A8A, fields, 2);
        return &instance;
    }
};

struct HelmetGeosetDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2821752, -1, 5, 4, 0x103B3B37, fields, 4);
        return &instance;
    }
};

struct HighlightColorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(996358, -1, 5, 5, 0xF8B3A15F, fields, -1);
        return &instance;
    }
};

struct HolidayDescriptionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(996360, -1, 1, 1, 0xA7B94A81, fields, -1);
        return &instance;
    }
};

struct HolidayNamesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(996359, -1, 1, 1, 0xD76CBBD2, fields, -1);
        return &instance;
    }
};

struct HolidaysMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 10, false },
            { FT_INT, 26, false },
            { FT_BYTE, 10, false },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(996357, 0, 13, 13, 0x712B4323, fields, -1);
        return &instance;
    }
};

struct HotfixesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1995523, -1, 4, 4, 0xA2CB2E77, fields, -1);
        return &instance;
    }
};

struct ImportPriceArmorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121229, -1, 4, 4, 0xC9501AE7, fields, -1);
        return &instance;
    }
};

struct ImportPriceQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121228, -1, 1, 1, 0x08763C54, fields, -1);
        return &instance;
    }
};

struct ImportPriceShieldMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121227, -1, 1, 1, 0x08763C54, fields, -1);
        return &instance;
    }
};

struct ImportPriceWeaponMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121230, -1, 1, 1, 0x08763C54, fields, -1);
        return &instance;
    }
};

struct InvasionClientDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1336651, 2, 10, 9, 0x2B0F31F8, fields, 9);
        return &instance;
    }
};

struct ItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[21] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 5, false },
            { FT_INT, 7, true },
            { FT_INT, 5, true },
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(841626, -1, 21, 21, 0x39911A3F, fields, -1);
        return &instance;
    }
};

struct ItemAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982462, -1, 5, 5, 0x481C4281, fields, -1);
        return &instance;
    }
};

struct ItemAppearanceXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1248126, -1, 2, 2, 0x4BEBE0CD, fields, -1);
        return &instance;
    }
};

struct ItemArmorQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1283021, -1, 1, 1, 0x2935AA9D, fields, -1);
        return &instance;
    }
};

struct ItemArmorShieldMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 7, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1277741, -1, 2, 2, 0x7E6C94F9, fields, -1);
        return &instance;
    }
};

struct ItemArmorTotalMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1283022, -1, 5, 5, 0xEB155D51, fields, -1);
        return &instance;
    }
};

struct ItemBagFamilyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1278179, -1, 1, 1, 0x782EE721, fields, -1);
        return &instance;
    }
};

struct ItemBonusMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 4, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(959070, -1, 4, 4, 0x79CD4525, fields, 1);
        return &instance;
    }
};

struct ItemBonusListLevelDeltaMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1320358, 1, 2, 2, 0x52DF470F, fields, -1);
        return &instance;
    }
};

struct ItemBonusTreeNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(987134, -1, 11, 10, 0x4049606F, fields, 10);
        return &instance;
    }
};

struct ItemChildEquipmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1247926, -1, 3, 3, 0x9E21E6BE, fields, 0);
        return &instance;
    }
};

struct ItemClassMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140189, -1, 4, 4, 0x35680EB8, fields, -1);
        return &instance;
    }
};

struct ItemContextPickerEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1405665, -1, 6, 5, 0x59605001, fields, 5);
        return &instance;
    }
};

struct ItemCurrencyCostMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801670, -1, 1, 1, 0xA1F65D6B, fields, 0);
        return &instance;
    }
};

struct ItemDamageAmmoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277740, -1, 2, 2, 0x56F30531, fields, -1);
        return &instance;
    }
};

struct ItemDamageOneHandMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277743, -1, 2, 2, 0x56F30531, fields, -1);
        return &instance;
    }
};

struct ItemDamageOneHandCasterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277739, -1, 2, 2, 0x56F30531, fields, -1);
        return &instance;
    }
};

struct ItemDamageTwoHandMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277738, -1, 2, 2, 0x56F30531, fields, -1);
        return &instance;
    }
};

struct ItemDamageTwoHandCasterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277742, -1, 2, 2, 0x56F30531, fields, -1);
        return &instance;
    }
};

struct ItemDisenchantLootMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134087, -1, 7, 6, 0x5845A4AA, fields, 6);
        return &instance;
    }
};

struct ItemDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, false },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 6, true },
            { FT_INT, 6, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1266429, -1, 16, 16, 0x9F3AB8A9, fields, -1);
        return &instance;
    }
};

struct ItemDisplayInfoMaterialResMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280614, -1, 3, 2, 0xAA462C0E, fields, 2);
        return &instance;
    }
};

struct ItemDisplayXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1146690, -1, 2, 2, 0xD6A09D12, fields, -1);
        return &instance;
    }
};

struct ItemEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(969941, -1, 10, 9, 0x1BF9CF3A, fields, 9);
        return &instance;
    }
};

struct ItemExtendedCostMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 5, true },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
            { FT_INT, 5, false },
        };
        static constexpr DB2Meta instance(801681, -1, 10, 10, 0x6F3FC018, fields, -1);
        return &instance;
    }
};

struct ItemGroupSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1283023, -1, 1, 1, 0xA7CEF530, fields, -1);
        return &instance;
    }
};

struct ItemLevelSelectorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1588911, -1, 2, 2, 0x3FC77064, fields, -1);
        return &instance;
    }
};

struct ItemLevelSelectorQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1624937, -1, 3, 2, 0x3016B2C0, fields, 2);
        return &instance;
    }
};

struct ItemLevelSelectorQualitySetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1624933, -1, 2, 2, 0x6EF696F8, fields, -1);
        return &instance;
    }
};

struct ItemLimitCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1237440, -1, 3, 3, 0xB0A784BD, fields, -1);
        return &instance;
    }
};

struct ItemLimitCategoryConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1378590, -1, 3, 2, 0x8DC9459D, fields, 2);
        return &instance;
    }
};

struct ItemModifiedAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982457, 0, 7, 7, 0x03A6C979, fields, 1);
        return &instance;
    }
};

struct ItemModifiedAppearanceExtraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1278399, -1, 5, 5, 0x5F7C0B7F, fields, -1);
        return &instance;
    }
};

struct ItemNameDescriptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1332559, -1, 3, 2, 0x4A3BF7A3, fields, 2);
        return &instance;
    }
};

struct ItemPetFoodMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1302240, -1, 1, 1, 0xDAD218A6, fields, -1);
        return &instance;
    }
};

struct ItemPriceBaseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121231, -1, 3, 3, 0x9AD504F0, fields, -1);
        return &instance;
    }
};

struct ItemRandomPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(1237441, -1, 2, 2, 0x3FB9ECA3, fields, -1);
        return &instance;
    }
};

struct ItemRandomSuffixMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 5, true },
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(1237592, -1, 3, 3, 0x4C5DE61E, fields, -1);
        return &instance;
    }
};

struct ItemRangedDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1270315, -1, 4, 4, 0x16D5D0A7, fields, -1);
        return &instance;
    }
};

struct ItemSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 17, false },
        };
        static constexpr DB2Meta instance(1343609, -1, 5, 5, 0xF79068A4, fields, -1);
        return &instance;
    }
};

struct ItemSetSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1314689, -1, 5, 4, 0x2666A73F, fields, 4);
        return &instance;
    }
};

struct ItemSparseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[74] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 10, true },
            { FT_INT, 10, true },
            { FT_INT, 10, true },
            { FT_INT, 10, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 2, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 5, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
            { FT_SHORT, 7, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 10, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1572924, -1, 74, 74, 0xB51F7C79, fields, -1);
        return &instance;
    }
};

struct ItemSpecMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1135120, -1, 6, 6, 0x83F3D113, fields, 2);
        return &instance;
    }
};

struct ItemSpecOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134576, -1, 2, 1, 0xB292998C, fields, 1);
        return &instance;
    }
};

struct ItemSubClassMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1261604, 2, 11, 11, 0x1E67DB87, fields, 3);
        return &instance;
    }
};

struct ItemSubClassMaskMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1302852, -1, 3, 3, 0xD1A996F3, fields, -1);
        return &instance;
    }
};

struct ItemUpgradeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(801687, 0, 6, 6, 0xA223456F, fields, 1);
        return &instance;
    }
};

struct ItemVisualsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(1343605, -1, 1, 1, 0x4E9F1674, fields, -1);
        return &instance;
    }
};

struct ItemVisualsXEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3043873, -1, 6, 5, 0x62F4C094, fields, 5);
        return &instance;
    }
};

struct ItemXBonusTreeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(987133, -1, 2, 1, 0x5A99E55B, fields, 1);
        return &instance;
    }
};

struct JournalEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1240336, 3, 12, 12, 0xB88D11CC, fields, -1);
        return &instance;
    }
};

struct JournalEncounterCreatureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1301155, 2, 8, 8, 0x81A3C769, fields, 3);
        return &instance;
    }
};

struct JournalEncounterItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1344467, 0, 7, 7, 0xBEA0FECD, fields, 1);
        return &instance;
    }
};

struct JournalEncounterSectionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1134413, -1, 15, 15, 0xCB88312B, fields, -1);
        return &instance;
    }
};

struct JournalEncounterXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1121901, -1, 2, 1, 0xC038156D, fields, 1);
        return &instance;
    }
};

struct JournalEncounterXMapLocMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1722928, -1, 5, 4, 0x330EE16F, fields, 4);
        return &instance;
    }
};

struct JournalInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1237438, -1, 9, 9, 0x811ABB6A, fields, -1);
        return &instance;
    }
};

struct JournalItemXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1277744, -1, 2, 1, 0x0AD35082, fields, 1);
        return &instance;
    }
};

struct JournalSectionXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1121900, -1, 2, 1, 0x9A12141A, fields, 1);
        return &instance;
    }
};

struct JournalTierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1349056, -1, 1, 1, 0xCA44F886, fields, -1);
        return &instance;
    }
};

struct JournalTierXInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1285009, -1, 4, 4, 0xBFCBF1F0, fields, 0);
        return &instance;
    }
};

struct KeychainMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 32, false },
        };
        static constexpr DB2Meta instance(801693, -1, 1, 1, 0x019E306C, fields, -1);
        return &instance;
    }
};

struct KeystoneAffixMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1344761, 2, 4, 4, 0x63C870B5, fields, -1);
        return &instance;
    }
};

struct LFGDungeonExpansionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343606, -1, 7, 6, 0xC96332BB, fields, 6);
        return &instance;
    }
};

struct LFGDungeonGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1135058, -1, 4, 4, 0x920DFF98, fields, -1);
        return &instance;
    }
};

struct LFGDungeonsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[36] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1361033, -1, 36, 36, 0xC721FFAA, fields, -1);
        return &instance;
    }
};

struct LFGRoleRequirementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982805, -1, 3, 2, 0x8D26EA6B, fields, 2);
        return &instance;
    }
};

struct LanguageWordsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(984702, -1, 2, 2, 0x07F670AA, fields, -1);
        return &instance;
    }
};

struct LanguagesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1135325, 1, 6, 6, 0xD259DA42, fields, -1);
        return &instance;
    }
};

struct LfgDungeonsGroupingMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1339818, -1, 3, 2, 0x105EA15A, fields, 2);
        return &instance;
    }
};

struct LightMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1375579, -1, 5, 5, 0x5F16BC84, fields, -1);
        return &instance;
    }
};

struct LightDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[46] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 4, true },
            { FT_FLOAT, 4, true },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1375580, -1, 46, 46, 0x70C6CD80, fields, 0);
        return &instance;
    }
};

struct LightParamsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1334669, 2, 17, 17, 0x51C96BAD, fields, -1);
        return &instance;
    }
};

struct LightSkyboxMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1308501, -1, 4, 4, 0x9D4956FF, fields, -1);
        return &instance;
    }
};

struct LightningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[34] =
        {
            { FT_FLOAT, 2, true },
            { FT_INT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2003383, -1, 34, 34, 0x645F11FD, fields, -1);
        return &instance;
    }
};

struct LiquidMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1132538, -1, 2, 2, 0x98E5D7AA, fields, -1);
        return &instance;
    }
};

struct LiquidObjectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1308058, -1, 5, 5, 0xCB0D39E8, fields, -1);
        return &instance;
    }
};

struct LiquidTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[21] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 6, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 6, false },
            { FT_INT, 3, true },
            { FT_FLOAT, 38, true },
            { FT_INT, 4, false },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1371380, -1, 21, 21, 0xD1ECEEC9, fields, -1);
        return &instance;
    }
};

struct LoadingScreenTaxiSplinesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 10, true },
            { FT_FLOAT, 10, true },
        };
        static constexpr DB2Meta instance(1302239, -1, 5, 5, 0x877DB13E, fields, -1);
        return &instance;
    }
};

struct LoadingScreensMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1266541, -1, 3, 3, 0xA28F3422, fields, -1);
        return &instance;
    }
};

struct LocaleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801706, -1, 4, 4, 0xD82F8985, fields, -1);
        return &instance;
    }
};

struct LocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(801707, -1, 2, 2, 0xD18A3880, fields, -1);
        return &instance;
    }
};

struct LockMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 8, true },
            { FT_SHORT, 8, false },
            { FT_BYTE, 8, false },
            { FT_BYTE, 8, false },
        };
        static constexpr DB2Meta instance(1343608, -1, 4, 4, 0x8FA7E48A, fields, -1);
        return &instance;
    }
};

struct LockTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1284823, 4, 5, 5, 0x9687001F, fields, -1);
        return &instance;
    }
};

struct LookAtControllerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1098785, -1, 18, 18, 0x257BE69C, fields, -1);
        return &instance;
    }
};

struct MailTemplateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1240344, -1, 1, 1, 0xB436C1C8, fields, -1);
        return &instance;
    }
};

struct ManagedWorldStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(1587159, 0, 10, 10, 0xFD996676, fields, -1);
        return &instance;
    }
};

struct ManagedWorldStateBuffMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1587155, -1, 4, 3, 0xB8C3D344, fields, 3);
        return &instance;
    }
};

struct ManagedWorldStateInputMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1587151, -1, 3, 3, 0x16683306, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceActionIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1375803, 0, 1, 1, 0xF2103A31, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1375801, -1, 2, 2, 0x618AD009, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceItemIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1375804, 0, 1, 1, 0xF2103A31, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceTOCDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1267335, -1, 1, 1, 0xC45B9788, fields, -1);
        return &instance;
    }
};

struct MapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1349477, -1, 23, 23, 0xB47C6F05, fields, -1);
        return &instance;
    }
};

struct MapCelestialBodyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1597466, -1, 3, 2, 0xA320FA08, fields, 2);
        return &instance;
    }
};

struct MapChallengeModeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 5, true },
            { FT_INT, 6, true },
            { FT_INT, 6, true },
        };
        static constexpr DB2Meta instance(801709, 1, 10, 10, 0xAAC13A73, fields, 2);
        return &instance;
    }
};

struct MapDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1367868, 1, 12, 11, 0x24A16AD3, fields, 11);
        return &instance;
    }
};

struct MapDifficultyXConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1375435, -1, 4, 3, 0xD514B4CA, fields, 3);
        return &instance;
    }
};

struct MapLoadingScreenMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1719707, -1, 5, 4, 0xB7151FA7, fields, 4);
        return &instance;
    }
};

struct MarketingPromotionsXLocaleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801710, -1, 7, 7, 0xA76A6607, fields, -1);
        return &instance;
    }
};

struct MaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1294217, -1, 4, 4, 0xBE3E0E4C, fields, -1);
        return &instance;
    }
};

struct MinorTalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1347274, -1, 3, 2, 0x6EF747EB, fields, 2);
        return &instance;
    }
};

struct MissileTargetingMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1710117, -1, 12, 12, 0x9492D27D, fields, -1);
        return &instance;
    }
};

struct ModelAnimCloakDampeningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1465904, -1, 3, 2, 0xF2AE9C79, fields, 2);
        return &instance;
    }
};

struct ModelFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1337833, 1, 5, 5, 0x2AE4E788, fields, 4);
        return &instance;
    }
};

struct ModelRibbonQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1399953, -1, 2, 1, 0x6444FDE5, fields, 1);
        return &instance;
    }
};

struct ModifierTreeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1267645, -1, 7, 7, 0xE0CCCA58, fields, -1);
        return &instance;
    }
};

struct MountMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(921760, 3, 11, 11, 0xDB77F653, fields, -1);
        return &instance;
    }
};

struct MountCapabilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1114709, 0, 10, 10, 0x6B7A5ED2, fields, -1);
        return &instance;
    }
};

struct MountTypeXCapabilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1114715, -1, 3, 3, 0x218BBE7F, fields, 0);
        return &instance;
    }
};

struct MountXDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1576117, -1, 4, 3, 0xC05B05EF, fields, 3);
        return &instance;
    }
};

struct MovieMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1332556, -1, 5, 5, 0xBFEB4861, fields, -1);
        return &instance;
    }
};

struct MovieFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1301154, -1, 1, 1, 0xA80F88DE, fields, -1);
        return &instance;
    }
};

struct MovieVariationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1339819, -1, 3, 2, 0xB5C17F58, fields, 2);
        return &instance;
    }
};

struct MultiStatePropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1965592, -1, 11, 10, 0x63E1D6FB, fields, 10);
        return &instance;
    }
};

struct MultiTransitionPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1965589, -1, 5, 5, 0xA20DA38D, fields, -1);
        return &instance;
    }
};

struct MythicPlusSeasonRewardLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2123783, -1, 4, 3, 0x83142F7A, fields, 3);
        return &instance;
    }
};

struct MythicPlusSeasonTrackedMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4521365, -1, 2, 1, 0x03958F0D, fields, 1);
        return &instance;
    }
};

struct NPCModelItemSlotDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1340661, -1, 3, 2, 0xC2057F5B, fields, 2);
        return &instance;
    }
};

struct NPCSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1282621, -1, 1, 1, 0x020BE1ED, fields, -1);
        return &instance;
    }
};

struct NameGenMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1122117, -1, 3, 3, 0x3CA45193, fields, -1);
        return &instance;
    }
};

struct NamesProfanityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1117086, -1, 2, 2, 0xF227E638, fields, -1);
        return &instance;
    }
};

struct NamesReservedMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1117085, -1, 1, 1, 0x2B2D5D97, fields, -1);
        return &instance;
    }
};

struct NamesReservedLocaleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1117087, -1, 2, 2, 0x7B9823D4, fields, -1);
        return &instance;
    }
};

struct NumTalentsAtLevelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1953326, 0, 5, 5, 0x1B85660E, fields, -1);
        return &instance;
    }
};

struct ObjectEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_FLOAT, 3, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1090577, -1, 8, 8, 0x47F997E2, fields, -1);
        return &instance;
    }
};

struct ObjectEffectModifierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 4, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1090575, -1, 4, 4, 0xD2FB79FA, fields, -1);
        return &instance;
    }
};

struct ObjectEffectPackageElemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1090578, -1, 3, 3, 0x8AF314FA, fields, -1);
        return &instance;
    }
};

struct OccluderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2066958, 0, 9, 9, 0x52CC2E24, fields, -1);
        return &instance;
    }
};

struct OccluderCurtainMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3850529, -1, 6, 6, 0xEA29F303, fields, -1);
        return &instance;
    }
};

struct OccluderLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2115224, 2, 4, 4, 0xDE4869EE, fields, -1);
        return &instance;
    }
};

struct OccluderNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2066959, 0, 4, 4, 0x2E207209, fields, -1);
        return &instance;
    }
};

struct OutlineEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1279739, -1, 6, 6, 0xD720BC0B, fields, -1);
        return &instance;
    }
};

struct OverrideSpellDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 10, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1002186, -1, 3, 3, 0x297CBDC8, fields, -1);
        return &instance;
    }
};

struct PVPBracketTypesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1394275, -1, 2, 2, 0xA3A33123, fields, -1);
        return &instance;
    }
};

struct PVPDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1339820, -1, 4, 3, 0x583BCBE4, fields, 3);
        return &instance;
    }
};

struct PVPItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(972287, -1, 2, 2, 0x67F64EE9, fields, -1);
        return &instance;
    }
};

struct PageTextMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1271600, -1, 1, 1, 0x728678A5, fields, -1);
        return &instance;
    }
};

struct PaperDollItemFrameMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1252503, -1, 3, 3, 0xD45CB1FC, fields, -1);
        return &instance;
    }
};

struct ParagonReputationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1581183, -1, 3, 3, 0xD4AF2D4F, fields, -1);
        return &instance;
    }
};

struct ParticleColorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 3, true },
            { FT_INT, 3, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1284820, -1, 3, 3, 0xD58506F1, fields, -1);
        return &instance;
    }
};

struct ParticulateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3396285, -1, 2, 2, 0x458CF691, fields, -1);
        return &instance;
    }
};

struct ParticulateSoundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2053913, -1, 5, 5, 0x2EE2C1E4, fields, 0);
        return &instance;
    }
};

struct PathMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801732, -1, 7, 7, 0xDF0EF640, fields, -1);
        return &instance;
    }
};

struct PathNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801733, 0, 4, 4, 0x2E207209, fields, -1);
        return &instance;
    }
};

struct PathNodePropertyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801734, 0, 5, 5, 0x646631F8, fields, -1);
        return &instance;
    }
};

struct PathPropertyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801735, 0, 4, 4, 0x9C63B5C8, fields, -1);
        return &instance;
    }
};

struct PetLoyaltyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(2179604, -1, 1, 1, 0xAD6104C6, fields, -1);
        return &instance;
    }
};

struct PetPersonalityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 8, true },
        };
        static constexpr DB2Meta instance(2179609, -1, 4, 4, 0x4736D6E1, fields, -1);
        return &instance;
    }
};

struct PhaseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1348558, -1, 1, 1, 0x6D5EB3BD, fields, -1);
        return &instance;
    }
};

struct PhaseShiftZoneSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1267336, -1, 13, 13, 0x3DC135AF, fields, -1);
        return &instance;
    }
};

struct PhaseXPhaseGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(987581, -1, 2, 1, 0xF3FF427F, fields, 1);
        return &instance;
    }
};

struct PlayerConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[86] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_INT, 3, false },
            { FT_BYTE, 3, false },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, false },
            { FT_SHORT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 4, true },
            { FT_BYTE, 4, false },
            { FT_INT, 4, false },
            { FT_SHORT, 4, false },
            { FT_BYTE, 4, false },
            { FT_BYTE, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 6, false },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 4, true },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
        };
        static constexpr DB2Meta instance(1045411, -1, 86, 86, 0x7A9E50CE, fields, -1);
        return &instance;
    }
};

struct PositionerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1251523, -1, 4, 4, 0xE0D4FD55, fields, -1);
        return &instance;
    }
};

struct PositionerStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1251506, -1, 8, 8, 0x9CDFBF30, fields, -1);
        return &instance;
    }
};

struct PositionerStateEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1251533, -1, 11, 11, 0x855AA6BC, fields, -1);
        return &instance;
    }
};

struct PowerDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1332557, -1, 5, 5, 0x613FAAFD, fields, -1);
        return &instance;
    }
};

struct PowerTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1266022, 2, 13, 13, 0x14BBEEA1, fields, -1);
        return &instance;
    }
};

struct PrestigeLevelInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1275869, -1, 5, 5, 0x6582638F, fields, -1);
        return &instance;
    }
};

struct PvpScalingEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1591100, -1, 3, 3, 0x295E05C1, fields, 1);
        return &instance;
    }
};

struct PvpScalingEffectTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1591098, -1, 1, 1, 0x21188F13, fields, -1);
        return &instance;
    }
};

struct PvpTalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1302853, 1, 9, 9, 0x37611B53, fields, 2);
        return &instance;
    }
};

struct PvpTalentCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1891534, -1, 1, 1, 0xECB2C5C2, fields, -1);
        return &instance;
    }
};

struct PvpTalentSlotUnlockMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1950197, -1, 4, 4, 0x9685CBCC, fields, -1);
        return &instance;
    }
};

struct PvpTierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2066871, -1, 8, 8, 0x8F30CD7C, fields, 5);
        return &instance;
    }
};

struct QuestFactionRewardMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 10, true },
        };
        static constexpr DB2Meta instance(1282622, -1, 1, 1, 0x221FFDAA, fields, -1);
        return &instance;
    }
};

struct QuestFeedbackEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343388, -1, 6, 6, 0x092DE5FD, fields, -1);
        return &instance;
    }
};

struct QuestInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1120960, -1, 4, 4, 0xE505C927, fields, -1);
        return &instance;
    }
};

struct QuestLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(973430, -1, 3, 3, 0x5675F41C, fields, -1);
        return &instance;
    }
};

struct QuestLineXQuestMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(973441, -1, 3, 3, 0x74023255, fields, 0);
        return &instance;
    }
};

struct QuestMoneyRewardMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 10, false },
        };
        static constexpr DB2Meta instance(1139047, -1, 1, 1, 0x01D6219A, fields, -1);
        return &instance;
    }
};

struct QuestObjectiveMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1251960, -1, 9, 8, 0xB85A3F1F, fields, 8);
        return &instance;
    }
};

struct QuestPackageItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801743, -1, 4, 4, 0x37A6BC1A, fields, -1);
        return &instance;
    }
};

struct QuestSortMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1134585, -1, 2, 2, 0xADCB489B, fields, -1);
        return &instance;
    }
};

struct QuestV2Meta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139443, -1, 1, 1, 0xC6FAA9AA, fields, -1);
        return &instance;
    }
};

struct QuestV2CliTaskMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[26] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, true },
            { FT_INT, 3, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1028735, 2, 26, 26, 0x00684B5C, fields, -1);
        return &instance;
    }
};

struct QuestXGroupActivityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1573634, -1, 2, 2, 0xD85CBF41, fields, -1);
        return &instance;
    }
};

struct QuestXPMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 10, true },
        };
        static constexpr DB2Meta instance(1139378, -1, 1, 1, 0x7790D0EA, fields, -1);
        return &instance;
    }
};

struct RandPropPointsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 5, false },
            { FT_INT, 5, false },
            { FT_INT, 5, false },
        };
        static constexpr DB2Meta instance(1310245, -1, 4, 4, 0x5DAD011D, fields, -1);
        return &instance;
    }
};

struct RelicSlotTierRequirementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1716803, -1, 3, 3, 0xA6DB0949, fields, -1);
        return &instance;
    }
};

struct RelicTalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1671256, -1, 5, 5, 0x56CB54B7, fields, -1);
        return &instance;
    }
};

struct ResearchBranchMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1133729, -1, 6, 6, 0x6BB8E374, fields, -1);
        return &instance;
    }
};

struct ResearchFieldMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1133711, 1, 3, 3, 0x75B20B30, fields, -1);
        return &instance;
    }
};

struct ResearchProjectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1134090, 2, 9, 9, 0xACC3695F, fields, -1);
        return &instance;
    }
};

struct ResearchSiteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1134091, -1, 4, 4, 0xBD957EAB, fields, -1);
        return &instance;
    }
};

struct ResistancesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1135072, -1, 3, 3, 0xED08F596, fields, -1);
        return &instance;
    }
};

struct RewardPackMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1307156, -1, 6, 6, 0x5FABA92D, fields, -1);
        return &instance;
    }
};

struct RewardPackXCurrencyTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1307153, -1, 3, 2, 0x160ED195, fields, 2);
        return &instance;
    }
};

struct RewardPackXItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1307155, -1, 3, 2, 0x8BE182DE, fields, 2);
        return &instance;
    }
};

struct RibbonQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1398908, -1, 5, 5, 0x21D24223, fields, -1);
        return &instance;
    }
};

struct RulesetItemUpgradeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801749, -1, 2, 2, 0xFD873767, fields, -1);
        return &instance;
    }
};

struct SDReplacementModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1712172, -1, 1, 1, 0xA051D530, fields, -1);
        return &instance;
    }
};

struct SSAOSettingsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2056369, 0, 5, 5, 0xFD35E147, fields, -1);
        return &instance;
    }
};

struct ScalingStatDistributionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 10, true },
            { FT_INT, 10, true },
        };
        static constexpr DB2Meta instance(1141728, -1, 5, 5, 0x68031639, fields, -1);
        return &instance;
    }
};

struct ScalingStatValuesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[39] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(4719537, -1, 39, 39, 0x63E728DB, fields, -1);
        return &instance;
    }
};

struct ScenarioMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1139062, -1, 6, 6, 0xB7C9ECF5, fields, -1);
        return &instance;
    }
};

struct ScenarioEventEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1141065, -1, 2, 2, 0xF422AA1F, fields, -1);
        return &instance;
    }
};

struct ScenarioStepMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1132761, 2, 12, 12, 0x4F644CD3, fields, 3);
        return &instance;
    }
};

struct SceneScriptMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801754, -1, 3, 3, 0x48BF6E91, fields, -1);
        return &instance;
    }
};

struct SceneScriptGlobalTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1758036, -1, 2, 2, 0x4A2C4981, fields, -1);
        return &instance;
    }
};

struct SceneScriptPackageMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801755, -1, 2, 2, 0x688D153F, fields, -1);
        return &instance;
    }
};

struct SceneScriptPackageMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801756, -1, 4, 4, 0x0A4D9E92, fields, 0);
        return &instance;
    }
};

struct SceneScriptTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1758037, -1, 2, 2, 0x4A2C4981, fields, -1);
        return &instance;
    }
};

struct ScheduledIntervalMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1327082, -1, 5, 5, 0xCA76AD5C, fields, -1);
        return &instance;
    }
};

struct ScreenEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 4, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1302849, -1, 12, 12, 0x014DC3B4, fields, -1);
        return &instance;
    }
};

struct ScreenEffectTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3063174, -1, 1, 1, 0x5F754E48, fields, -1);
        return &instance;
    }
};

struct ScreenLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1279416, -1, 2, 2, 0xB5DB4956, fields, -1);
        return &instance;
    }
};

struct SeamlessSiteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1328719, -1, 1, 1, 0x5F662944, fields, 0);
        return &instance;
    }
};

struct ServerMessagesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1301141, -1, 1, 1, 0x022C43AA, fields, -1);
        return &instance;
    }
};

struct ShadowyEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1239844, -1, 13, 13, 0x2EC8BCB8, fields, -1);
        return &instance;
    }
};

struct SiegeablePropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1954391, -1, 4, 4, 0xC23E8C67, fields, -1);
        return &instance;
    }
};

struct SkillLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1240935, 5, 13, 13, 0x1123150E, fields, -1);
        return &instance;
    }
};

struct SkillLineAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1266278, 0, 16, 16, 0x0ED0E33F, fields, 1);
        return &instance;
    }
};

struct SkillLineCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(2179610, -1, 2, 2, 0xF61608B2, fields, -1);
        return &instance;
    }
};

struct SkillRaceClassInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_LONG, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1240406, -1, 9, 9, 0x8A16CBF5, fields, 1);
        return &instance;
    }
};

struct SkySceneXPlayerConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3581893, -1, 2, 1, 0xB57B5277, fields, 1);
        return &instance;
    }
};

struct SoundAmbienceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1310628, -1, 6, 6, 0x3FBF2710, fields, -1);
        return &instance;
    }
};

struct SoundAmbienceFlavorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1267065, -1, 3, 2, 0x34C96927, fields, 2);
        return &instance;
    }
};

struct SoundBusMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310246, 0, 8, 7, 0xA591AA63, fields, 7);
        return &instance;
    }
};

struct SoundBusOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1598732, 0, 7, 7, 0x8D9C5CFE, fields, 1);
        return &instance;
    }
};

struct SoundEmitterPillPointsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1092317, -1, 2, 2, 0xC937A96A, fields, 1);
        return &instance;
    }
};

struct SoundEmittersMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1092316, 3, 12, 11, 0xECA3CBB9, fields, 11);
        return &instance;
    }
};

struct SoundEnvelopeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1693131, -1, 7, 7, 0xFA91357A, fields, 0);
        return &instance;
    }
};

struct SoundFilterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1271601, -1, 1, 1, 0x21188F13, fields, -1);
        return &instance;
    }
};

struct SoundFilterElemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 9, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1267066, -1, 3, 2, 0x7F024953, fields, 2);
        return &instance;
    }
};

struct SoundKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1237434, 0, 17, 17, 0x2EB0F915, fields, -1);
        return &instance;
    }
};

struct SoundKitAdvancedMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[44] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1237436, 0, 44, 44, 0x7030FCE8, fields, -1);
        return &instance;
    }
};

struct SoundKitChildMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1307289, -1, 2, 2, 0x2927CB50, fields, 1);
        return &instance;
    }
};

struct SoundKitEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1237435, -1, 5, 5, 0x8F82FF7D, fields, 0);
        return &instance;
    }
};

struct SoundKitFallbackMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1307288, -1, 2, 2, 0x6EE7A367, fields, -1);
        return &instance;
    }
};

struct SoundOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266542, -1, 5, 5, 0x72095100, fields, -1);
        return &instance;
    }
};

struct SoundProviderPreferencesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1279417, -1, 23, 23, 0x8FF22D98, fields, -1);
        return &instance;
    }
};

struct SourceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1313612, 1, 6, 5, 0xE718F422, fields, 5);
        return &instance;
    }
};

struct SpamMessagesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1117088, -1, 1, 1, 0x5F2CCE2B, fields, -1);
        return &instance;
    }
};

struct SpecSetMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2057624, -1, 2, 1, 0x504CA82E, fields, 1);
        return &instance;
    }
};

struct SpecializationSpellsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1240335, 1, 6, 6, 0xFA4367B5, fields, 2);
        return &instance;
    }
};

struct SpecializationSpellsDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 6, false },
        };
        static constexpr DB2Meta instance(2067238, -1, 2, 2, 0x60F7EE9A, fields, 0);
        return &instance;
    }
};

struct SpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1140089, -1, 3, 3, 0xE3D134FB, fields, -1);
        return &instance;
    }
};

struct SpellActionBarPrefMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1019373, -1, 2, 2, 0x45039384, fields, -1);
        return &instance;
    }
};

struct SpellActivationOverlayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 4, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1261603, -1, 10, 10, 0x23479564, fields, -1);
        return &instance;
    }
};

struct SpellAuraOptionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139952, -1, 8, 7, 0x61BEC501, fields, 7);
        return &instance;
    }
};

struct SpellAuraRestrictionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(981566, -1, 10, 9, 0xA67A56A1, fields, 9);
        return &instance;
    }
};

struct SpellAuraVisXChrSpecMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280615, -1, 2, 1, 0x893DE38B, fields, 1);
        return &instance;
    }
};

struct SpellAuraVisibilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280616, 0, 4, 3, 0xBDBF86F9, fields, 3);
        return &instance;
    }
};

struct SpellCastTimesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134089, -1, 3, 3, 0x5786BD00, fields, -1);
        return &instance;
    }
};

struct SpellCastingRequirementsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1002166, -1, 7, 7, 0x02074290, fields, -1);
        return &instance;
    }
};

struct SpellCategoriesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139939, -1, 9, 8, 0xA086466E, fields, 8);
        return &instance;
    }
};

struct SpellCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280619, -1, 6, 6, 0xB79B78E1, fields, -1);
        return &instance;
    }
};

struct SpellChainEffectsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[61] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 11, false },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1343310, -1, 61, 61, 0x3E3B28F5, fields, -1);
        return &instance;
    }
};

struct SpellClassOptionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(979663, -1, 4, 4, 0xDFE6B427, fields, -1);
        return &instance;
    }
};

struct SpellCooldownsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139924, -1, 6, 5, 0xDC945B8C, fields, 5);
        return &instance;
    }
};

struct SpellCraftUIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(2620904, -1, 1, 1, 0x5190ECA9, fields, -1);
        return &instance;
    }
};

struct SpellDescriptionVariablesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1140004, -1, 1, 1, 0x33868CFD, fields, -1);
        return &instance;
    }
};

struct SpellDispelTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1137829, -1, 4, 4, 0x47AA7AEB, fields, -1);
        return &instance;
    }
};

struct SpellDurationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1137828, -1, 3, 3, 0xBE65BD35, fields, -1);
        return &instance;
    }
};

struct SpellEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[31] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, false },
            { FT_INT, 4, true },
            { FT_SHORT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140088, -1, 31, 30, 0xF09BE50E, fields, 30);
        return &instance;
    }
};

struct SpellEffectAutoDescriptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1888495, -1, 9, 9, 0x383904CC, fields, -1);
        return &instance;
    }
};

struct SpellEffectEmissionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310248, -1, 4, 4, 0x05E061C1, fields, -1);
        return &instance;
    }
};

struct SpellEquippedItemsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140011, -1, 4, 4, 0xD9177916, fields, -1);
        return &instance;
    }
};

struct SpellFlyoutMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1146819, -1, 6, 6, 0xBE7036C6, fields, -1);
        return &instance;
    }
};

struct SpellFlyoutItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134085, -1, 3, 2, 0xCBAF7BE8, fields, 2);
        return &instance;
    }
};

struct SpellFocusObjectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1280620, -1, 1, 1, 0x782EE721, fields, -1);
        return &instance;
    }
};

struct SpellInterruptsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139906, -1, 5, 4, 0x6FFC0306, fields, 4);
        return &instance;
    }
};

struct SpellItemEnchantmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_INT, 3, true },
            { FT_INT, 3, true },
            { FT_INT, 3, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1362771, -1, 22, 22, 0xC681231E, fields, -1);
        return &instance;
    }
};

struct SpellItemEnchantmentConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 5, false },
            { FT_INT, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
        };
        static constexpr DB2Meta instance(1121834, -1, 6, 6, 0xD5348137, fields, -1);
        return &instance;
    }
};

struct SpellKeyboundOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1127327, -1, 4, 4, 0x6B01CAC2, fields, -1);
        return &instance;
    }
};

struct SpellLabelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1347275, -1, 2, 1, 0x2B9F0138, fields, 1);
        return &instance;
    }
};

struct SpellLearnSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1001907, -1, 3, 3, 0x00CA7CE8, fields, -1);
        return &instance;
    }
};

struct SpellLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140079, -1, 6, 5, 0x1B52E35E, fields, 5);
        return &instance;
    }
};

struct SpellMechanicMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1014438, -1, 1, 1, 0x636442CA, fields, -1);
        return &instance;
    }
};

struct SpellMiscMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_INT, 17, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1003144, -1, 14, 13, 0xA1CC356A, fields, 13);
        return &instance;
    }
};

struct SpellMissileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(897956, -1, 15, 15, 0x91E5E150, fields, -1);
        return &instance;
    }
};

struct SpellMissileMotionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(897955, -1, 4, 4, 0x0200AB02, fields, -1);
        return &instance;
    }
};

struct SpellNameMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1990283, -1, 1, 1, 0x782EE721, fields, -1);
        return &instance;
    }
};

struct SpellPowerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982806, 0, 14, 13, 0xDFC24E8B, fields, 13);
        return &instance;
    }
};

struct SpellPowerDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(982804, 0, 3, 3, 0xEC38DED5, fields, -1);
        return &instance;
    }
};

struct SpellProceduralEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1140477, 0, 3, 3, 0xFD22050D, fields, -1);
        return &instance;
    }
};

struct SpellProcsPerMinuteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1133526, -1, 2, 2, 0x2227014B, fields, -1);
        return &instance;
    }
};

struct SpellProcsPerMinuteModMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1133525, -1, 4, 3, 0x2B35D327, fields, 3);
        return &instance;
    }
};

struct SpellRadiusMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1134584, -1, 4, 4, 0xF9A913EE, fields, -1);
        return &instance;
    }
};

struct SpellRangeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1146820, -1, 5, 5, 0xADA13705, fields, -1);
        return &instance;
    }
};

struct SpellReagentsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 8, true },
            { FT_SHORT, 8, true },
        };
        static constexpr DB2Meta instance(841946, -1, 3, 3, 0xC65EBB84, fields, -1);
        return &instance;
    }
};

struct SpellReagentsCurrencyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1135239, -1, 3, 3, 0xF02FA4EB, fields, 0);
        return &instance;
    }
};

struct SpellScalingMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139940, -1, 10, 10, 0x695DA5D3, fields, -1);
        return &instance;
    }
};

struct SpellShapeshiftMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1139929, -1, 4, 4, 0xE9111399, fields, -1);
        return &instance;
    }
};

struct SpellShapeshiftFormMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 4, false },
            { FT_INT, 8, false },
        };
        static constexpr DB2Meta instance(1280618, -1, 11, 11, 0x85215FCE, fields, -1);
        return &instance;
    }
};

struct SpellSpecialUnitEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1268903, -1, 2, 2, 0xDA6DFF4B, fields, -1);
        return &instance;
    }
};

struct SpellTargetRestrictionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139993, -1, 8, 7, 0x1EAB753E, fields, 7);
        return &instance;
    }
};

struct SpellTotemsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 2, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1002162, -1, 3, 3, 0x03B23619, fields, -1);
        return &instance;
    }
};

struct SpellVisualMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(897952, -1, 18, 18, 0xEF7EF1D5, fields, -1);
        return &instance;
    }
};

struct SpellVisualAnimMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140479, -1, 4, 4, 0xF233613A, fields, -1);
        return &instance;
    }
};

struct SpellVisualColorEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1094006, -1, 11, 11, 0x68DC9BB8, fields, -1);
        return &instance;
    }
};

struct SpellVisualEffectNameMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(897948, -1, 15, 15, 0x6EFEF8B7, fields, -1);
        return &instance;
    }
};

struct SpellVisualEventMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1685317, -1, 9, 8, 0xC578A6C7, fields, 8);
        return &instance;
    }
};

struct SpellVisualKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(897949, -1, 9, 9, 0x9117C5E3, fields, -1);
        return &instance;
    }
};

struct SpellVisualKitAreaModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(897951, -1, 6, 6, 0x73AFF8E4, fields, -1);
        return &instance;
    }
};

struct SpellVisualKitEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140480, -1, 3, 2, 0xE3206CA2, fields, 2);
        return &instance;
    }
};

struct SpellVisualKitModelAttachMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(897953, 2, 23, 22, 0x2E4C71CF, fields, 22);
        return &instance;
    }
};

struct SpellVisualMissileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(897954, 2, 17, 16, 0xB670A059, fields, 16);
        return &instance;
    }
};

struct SpellXDescriptionVariablesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1724949, -1, 2, 2, 0x23F4E51E, fields, -1);
        return &instance;
    }
};

struct SpellXSpellVisualMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1101657, 0, 13, 12, 0x7994A890, fields, 12);
        return &instance;
    }
};

struct StableSlotPricesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2179613, -1, 1, 1, 0x31ADFC89, fields, -1);
        return &instance;
    }
};

struct StartupFilesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1604265, -1, 3, 3, 0x3E639C9F, fields, -1);
        return &instance;
    }
};

struct Startup_StringsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1375805, -1, 2, 2, 0x0A561909, fields, -1);
        return &instance;
    }
};

struct StationeryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1140758, -1, 3, 3, 0x071EF9E6, fields, -1);
        return &instance;
    }
};

struct SummonPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1345276, -1, 5, 5, 0xA4CA5ECF, fields, -1);
        return &instance;
    }
};

struct TactKeyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 16, false },
        };
        static constexpr DB2Meta instance(1302850, -1, 1, 1, 0xCBA490FC, fields, -1);
        return &instance;
    }
};

struct TactKeyLookupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 8, false },
        };
        static constexpr DB2Meta instance(1302851, -1, 1, 1, 0x4983962C, fields, -1);
        return &instance;
    }
};

struct TalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, true },
            { FT_INT, 9, false },
            { FT_INT, 3, false },
            { FT_BYTE, 3, false },
        };
        static constexpr DB2Meta instance(1369062, -1, 14, 14, 0x147B0045, fields, -1);
        return &instance;
    }
};

struct TalentTabMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(2178102, -1, 10, 10, 0xB436F3C7, fields, -1);
        return &instance;
    }
};

struct TaxiNodesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1068100, 4, 14, 14, 0xA8EF6D9C, fields, 5);
        return &instance;
    }
};

struct TaxiPathMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1067802, 0, 4, 4, 0xA303DE51, fields, 1);
        return &instance;
    }
};

struct TaxiPathNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1000437, 1, 9, 9, 0xBB94AA30, fields, 2);
        return &instance;
    }
};

struct TerrainMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1307290, -1, 3, 3, 0xE1D9583A, fields, -1);
        return &instance;
    }
};

struct TerrainTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310249, -1, 6, 6, 0xAD4FFB9A, fields, -1);
        return &instance;
    }
};

struct TerrainTypeSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1284822, -1, 1, 1, 0xB99F5777, fields, -1);
        return &instance;
    }
};

struct TextureBlendSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_INT, 3, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1328721, -1, 11, 11, 0x4A955778, fields, -1);
        return &instance;
    }
};

struct TextureFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982459, 0, 3, 3, 0xBD7C74C2, fields, 2);
        return &instance;
    }
};

struct TierTransitionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3076928, -1, 4, 4, 0x6019C9CF, fields, -1);
        return &instance;
    }
};

struct TotemCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134586, -1, 3, 3, 0x86C8149C, fields, -1);
        return &instance;
    }
};

struct ToyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(988200, 1, 5, 5, 0x821B5D20, fields, -1);
        return &instance;
    }
};

struct TradeSkillCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1301101, 2, 7, 7, 0x2FFC30A4, fields, -1);
        return &instance;
    }
};

struct TransformMatrixMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1338702, -1, 5, 5, 0x45999148, fields, -1);
        return &instance;
    }
};

struct TransmogHolidayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1589454, 0, 2, 2, 0x1CF0A074, fields, -1);
        return &instance;
    }
};

struct TransmogSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1376213, 1, 13, 13, 0xC6875C71, fields, 7);
        return &instance;
    }
};

struct TransmogSetGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1576116, 1, 2, 2, 0xEBA8ED0E, fields, -1);
        return &instance;
    }
};

struct TransmogSetItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1376212, 0, 4, 4, 0x1330B84D, fields, 1);
        return &instance;
    }
};

struct TransportAnimationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140686, -1, 4, 3, 0xE622B105, fields, 3);
        return &instance;
    }
};

struct TransportPhysicsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121973, -1, 10, 10, 0xE05919AE, fields, -1);
        return &instance;
    }
};

struct TransportRotationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 4, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140687, -1, 3, 2, 0xD92B0C43, fields, 2);
        return &instance;
    }
};

struct TrophyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(975024, -1, 4, 4, 0x45761395, fields, -1);
        return &instance;
    }
};

struct UIExpansionDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1729547, 0, 12, 12, 0x260AA847, fields, -1);
        return &instance;
    }
};

struct UIExpansionDisplayInfoIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1729546, -1, 3, 2, 0xD1865277, fields, 2);
        return &instance;
    }
};

struct UIScriptedAnimationEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[27] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3556601, 0, 27, 27, 0x796691DB, fields, -1);
        return &instance;
    }
};

struct UiCamFbackTransmogChrRaceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1261406, -1, 5, 5, 0xE3278667, fields, -1);
        return &instance;
    }
};

struct UiCamFbackTransmogWeaponMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1261407, -1, 4, 4, 0x8A8745C9, fields, -1);
        return &instance;
    }
};

struct UiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1120287, -1, 9, 9, 0x9D5604E1, fields, -1);
        return &instance;
    }
};

struct UiCameraTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1120288, -1, 3, 3, 0xF315BDCB, fields, -1);
        return &instance;
    }
};

struct UiCanvasMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1989363, 0, 3, 3, 0xC115A578, fields, -1);
        return &instance;
    }
};

struct UiMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1957206, 1, 13, 13, 0x8F829B35, fields, 2);
        return &instance;
    }
};

struct UiMapArtMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957202, -1, 3, 3, 0x3AE7D144, fields, -1);
        return &instance;
    }
};

struct UiMapArtStyleLayerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957208, -1, 9, 8, 0x3F597F5A, fields, 8);
        return &instance;
    }
};

struct UiMapArtTileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957210, -1, 5, 4, 0x2DA5B77B, fields, 4);
        return &instance;
    }
};

struct UiMapAssignmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957219, 3, 10, 10, 0xF9899D73, fields, 4);
        return &instance;
    }
};

struct UiMapFogOfWarMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2006972, 0, 4, 4, 0xC42F6D05, fields, 1);
        return &instance;
    }
};

struct UiMapFogOfWarVisualizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2006973, -1, 3, 3, 0xD0E714A2, fields, -1);
        return &instance;
    }
};

struct UiMapGroupMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1957204, -1, 5, 5, 0x0FF75B01, fields, 1);
        return &instance;
    }
};

struct UiMapLinkMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2030690, 2, 9, 9, 0x767439DE, fields, 3);
        return &instance;
    }
};

struct UiMapXMapArtMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957217, -1, 3, 2, 0xEAE7DA2A, fields, 2);
        return &instance;
    }
};

struct UiModelSceneMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1548215, 0, 4, 4, 0xF48839BD, fields, -1);
        return &instance;
    }
};

struct UiModelSceneActorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1548214, 2, 10, 9, 0xE37AE886, fields, 9);
        return &instance;
    }
};

struct UiModelSceneActorDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1548216, -1, 7, 7, 0x7BD2B582, fields, -1);
        return &instance;
    }
};

struct UiModelSceneCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1548213, 3, 16, 15, 0x6277C173, fields, 15);
        return &instance;
    }
};

struct UiPartyPoseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1993323, 2, 12, 11, 0x1AE713AB, fields, 11);
        return &instance;
    }
};

struct UiTextureAtlasMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(897470, -1, 4, 4, 0x1D9B7D22, fields, -1);
        return &instance;
    }
};

struct UiTextureAtlasElementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1989276, 1, 2, 2, 0x7CCBD18F, fields, -1);
        return &instance;
    }
};

struct UiTextureAtlasMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(897532, 1, 14, 14, 0x75E12F73, fields, 9);
        return &instance;
    }
};

struct UiTextureKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(939159, -1, 1, 1, 0x4740638A, fields, -1);
        return &instance;
    }
};

struct UiWidgetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983278, 1, 9, 9, 0x0B3EABFD, fields, -1);
        return &instance;
    }
};

struct UiWidgetConstantSourceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983639, -1, 3, 2, 0x689BD038, fields, 2);
        return &instance;
    }
};

struct UiWidgetDataSourceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983640, -1, 4, 3, 0xA376EE6B, fields, 3);
        return &instance;
    }
};

struct UiWidgetStringSourceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983641, -1, 3, 2, 0x0E572854, fields, 2);
        return &instance;
    }
};

struct UiWidgetVisualizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1983276, -1, 10, 10, 0x4FB2B780, fields, -1);
        return &instance;
    }
};

struct UnitBloodMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1284821, -1, 2, 2, 0x324585EB, fields, -1);
        return &instance;
    }
};

struct UnitBloodLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 3, false },
        };
        static constexpr DB2Meta instance(1268904, -1, 1, 1, 0x13B47815, fields, -1);
        return &instance;
    }
};

struct UnitConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 8, false },
            { FT_BYTE, 8, false },
            { FT_INT, 8, true },
        };
        static constexpr DB2Meta instance(1120959, -1, 4, 4, 0x215FAF83, fields, -1);
        return &instance;
    }
};

struct UnitPowerBarMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 6, true },
            { FT_INT, 6, true },
        };
        static constexpr DB2Meta instance(1237753, -1, 16, 16, 0x6DB52D61, fields, -1);
        return &instance;
    }
};

struct VehicleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[19] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 8, false },
            { FT_SHORT, 3, false },
        };
        static constexpr DB2Meta instance(1368621, -1, 19, 19, 0x7CC3210B, fields, -1);
        return &instance;
    }
};

struct VehicleSeatMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[62] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1345447, -1, 62, 62, 0x2EFEF0C1, fields, -1);
        return &instance;
    }
};

struct VehicleUIIndSeatMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279741, -1, 4, 3, 0x1A05C81D, fields, 3);
        return &instance;
    }
};

struct VehicleUIIndicatorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279740, -1, 1, 1, 0x13526596, fields, -1);
        return &instance;
    }
};

struct VignetteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(892861, -1, 10, 10, 0xA6472C0E, fields, -1);
        return &instance;
    }
};

struct VirtualAttachmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1634482, -1, 2, 2, 0xECAB5C57, fields, -1);
        return &instance;
    }
};

struct VirtualAttachmentCustomizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1634480, -1, 3, 3, 0xD7602227, fields, -1);
        return &instance;
    }
};

struct VocalUISoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1267067, -1, 4, 4, 0xF192151C, fields, -1);
        return &instance;
    }
};

struct VoiceOverPriorityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4211372, -1, 3, 3, 0x11177BA9, fields, -1);
        return &instance;
    }
};

struct VolumeFogConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3587230, -1, 4, 3, 0x00F4D6A5, fields, 3);
        return &instance;
    }
};

struct WMOAreaTableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1355528, 1, 15, 15, 0xC5A7B977, fields, 2);
        return &instance;
    }
};

struct WMOMinimapTextureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1323241, -1, 5, 4, 0x01230A50, fields, 4);
        return &instance;
    }
};

struct WbAccessControlListMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(879634, -1, 5, 5, 0x814E6C18, fields, -1);
        return &instance;
    }
};

struct WeaponImpactSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
        };
        static constexpr DB2Meta instance(1267648, -1, 7, 7, 0xA77CBD9D, fields, -1);
        return &instance;
    }
};

struct WeaponSwingSounds2Meta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1267068, -1, 3, 3, 0x8CC18B68, fields, -1);
        return &instance;
    }
};

struct WeaponTrailMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(982461, -1, 9, 9, 0x334DF54B, fields, -1);
        return &instance;
    }
};

struct WeaponTrailModelDefMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1239843, -1, 3, 2, 0xFF75FD57, fields, 2);
        return &instance;
    }
};

struct WeaponTrailParamMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1239842, -1, 10, 9, 0x17D0C0A3, fields, 9);
        return &instance;
    }
};

struct WeatherMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(1343311, -1, 22, 22, 0xC8B40E80, fields, -1);
        return &instance;
    }
};

struct WeatherXParticulateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1965591, -1, 2, 1, 0x568F5BC4, fields, 1);
        return &instance;
    }
};

struct WindSettingsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(943871, -1, 10, 10, 0xCF880AC0, fields, -1);
        return &instance;
    }
};

struct WorldBossLockoutMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(975279, -1, 2, 2, 0x63019FFE, fields, -1);
        return &instance;
    }
};

struct WorldChunkSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1267069, -1, 7, 7, 0x01DC06CF, fields, -1);
        return &instance;
    }
};

struct WorldEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1343312, -1, 6, 6, 0xB841BBEE, fields, -1);
        return &instance;
    }
};

struct WorldElapsedTimerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1135240, -1, 3, 3, 0xABC59157, fields, -1);
        return &instance;
    }
};

struct WorldMapOverlayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1134579, 0, 13, 13, 0x7AB51D54, fields, 1);
        return &instance;
    }
};

struct WorldMapOverlayTileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957212, -1, 5, 4, 0x2C843422, fields, 4);
        return &instance;
    }
};

struct WorldStateExpressionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1332558, -1, 1, 1, 0xCA33F540, fields, -1);
        return &instance;
    }
};

struct WorldStateUIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 3, false },
        };
        static constexpr DB2Meta instance(1343596, 5, 17, 17, 0x50D95E2C, fields, 6);
        return &instance;
    }
};

struct WorldStateZoneSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266941, -1, 8, 8, 0x8CC049D9, fields, -1);
        return &instance;
    }
};

struct World_PVP_AreaMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1310255, -1, 7, 7, 0x06AB7E95, fields, -1);
        return &instance;
    }
};

struct ZoneIntroMusicTableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1310251, -1, 4, 4, 0xE1F93744, fields, -1);
        return &instance;
    }
};

struct ZoneLightMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1310253, -1, 8, 8, 0xBA8274F0, fields, -1);
        return &instance;
    }
};

struct ZoneLightPointMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 2, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310256, -1, 3, 2, 0xDE2377FB, fields, 2);
        return &instance;
    }
};

struct ZoneMusicMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1310254, -1, 4, 4, 0x72572D05, fields, -1);
        return &instance;
    }
};

struct ZoneStoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1797864, -1, 4, 3, 0x3D386FF2, fields, 3);
        return &instance;
    }
};


//struct WbCertWhitelistMeta
//{
//    static DB2Meta const* Instance()
//    {
//        static constexpr DB2MetaField fields[4] =
//        {
//            { FT_STRING_NOT_LOCALIZED, 1, true },
//            { FT_BYTE, 1, false },
//            { FT_BYTE, 1, false },
//            { FT_BYTE, 1, false },
//        };
//        static constexpr DB2Meta instance(? ? ? , -1, 4, 4, 0x543DDD18, fields, -1);
//        return &instance;
//    }
//};
//



#endif // DB2Metadata_h__
