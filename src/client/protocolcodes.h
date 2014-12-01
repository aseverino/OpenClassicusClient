/*
 * Copyright (c) 2010-2014 OTClient <https://github.com/edubart/otclient>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef PROTOCOLCODES_H
#define PROTOCOLCODES_H

#include "global.h"

namespace Proto {
    enum LoginServerOpts {
        LoginServerError = 10,
        LoginServerMotd = 20,
        LoginServerUpdateNeeded = 30,
        LoginServerCharacterList = 100
    };

    enum ItemOpcode {
        StaticText = 96,
        UnknownCreature = 97,
        OutdatedCreature = 98,
        Creature = 99
    };

    enum GameServerOpcodes : uint8
    {
        GameServerLoginOrPendingState       = 10,
        GameServerGMActions                 = 11,
        GameServerEnterGame                 = 15,
        GameServerUpdateNeeded              = 17,
        GameServerLoginError                = 20,
        GameServerLoginAdvice               = 21,
        GameServerLoginWait                 = 22,
        GameServerLoginSuccess              = 23,
        GameServerPingBack                  = 29,
        GameServerPing                      = 30,
        GameServerChallenge                 = 31,
        GameServerDeath                     = 40,

        // all in game opcodes must be greater than 50
        GameServerFirstGameOpcode           = 50,

        // otclient ONLY
        GameServerExtendedOpcode            = 50,

        // NOTE: add any custom opcodes in this range
        // 51 - 99
        GameServerChangeMapAwareRange       = 51,

        // original tibia ONLY
        GameServerFullMap                   = 100,
        GameServerMapTopRow                 = 101,
        GameServerMapRightRow               = 102,
        GameServerMapBottomRow              = 103,
        GameServerMapLeftRow                = 104,
        GameServerUpdateTile                = 105,
        GameServerCreateOnMap               = 106,
        GameServerChangeOnMap               = 107,
        GameServerDeleteOnMap               = 108,
        GameServerMoveCreature              = 109,
        GameServerOpenContainer             = 110,
        GameServerCloseContainer            = 111,
        GameServerCreateContainer           = 112,
        GameServerChangeInContainer         = 113,
        GameServerDeleteInContainer         = 114,
        GameServerSetInventory              = 120,
        GameServerDeleteInventory           = 121,
        GameServerOpenNpcTrade              = 122,
        GameServerPlayerGoods               = 123,
        GameServerCloseNpcTrade             = 124,
        GameServerOwnTrade                  = 125,
        GameServerCounterTrade              = 126,
        GameServerCloseTrade                = 127,
        GameServerAmbient                   = 130,
        GameServerGraphicalEffect           = 131,
        GameServerTextEffect                = 132,
        GameServerMissleEffect              = 133,
        GameServerMarkCreature              = 134,
        GameServerTrappers                  = 135,
        GameServerCreatureHealth            = 140,
        GameServerCreatureLight             = 141,
        GameServerCreatureOutfit            = 142,
        GameServerCreatureSpeed             = 143,
        GameServerCreatureSkull             = 144,
        GameServerCreatureParty             = 145,
        GameServerCreatureUnpass            = 146,
        GameServerCreatureMarks             = 147,
        GameServerPlayerHelpers             = 148,
        GameServerCreatureType              = 149,
        GameServerEditText                  = 150,
        GameServerEditList                  = 151,
        GameServerPremiumTrigger            = 158, // 1038
        GameServerPlayerDataBasic           = 159, // 950
        GameServerPlayerData                = 160,
        GameServerPlayerSkills              = 161,
        GameServerPlayerState               = 162,
        GameServerClearTarget               = 163,
        GameServerPlayerModes               = 167,
        GameServerSpellDelay                = 164, // 870
        GameServerSpellGroupDelay           = 165, // 870
        GameServerMultiUseDelay             = 166, // 870
        GameServerTalk                      = 170,
        GameServerChannels                  = 171,
        GameServerOpenChannel               = 172,
        GameServerOpenPrivateChannel        = 173,
        GameServerRuleViolationChannel      = 174,
        GameServerRuleViolationRemove       = 175,
        GameServerRuleViolationCancel       = 176,
        GameServerRuleViolationLock         = 177,
        GameServerOpenOwnChannel            = 178,
        GameServerCloseChannel              = 179,
        GameServerTextMessage               = 180,
        GameServerCancelWalk                = 181,
        GameServerWalkWait                  = 182,
        GameServerFloorChangeUp             = 190,
        GameServerFloorChangeDown           = 191,
        GameServerChooseOutfit              = 200,
        GameServerVipAdd                    = 210,
        GameServerVipState                  = 211,
        GameServerVipLogout                 = 212,
        GameServerTutorialHint              = 220,
        GameServerAutomapFlag               = 221,
        GameServerQuestLog                  = 240,
        GameServerQuestLine                 = 241,
        GameServerChannelEvent              = 243, // 910
        GameServerItemInfo                  = 244, // 910
        GameServerPlayerInventory           = 245, // 910
        GameServerMarketEnter               = 246, // 944
        GameServerMarketLeave               = 247, // 944
        GameServerMarketDetail              = 248, // 944
        GameServerMarketBrowse              = 249, // 944
        GameServerModalDialog               = 250  // 960
    };

    enum ClientOpcodes : uint8
    {
        ClientEnterAccount                  = 1		+1,
        ClientPendingGame                   = 10	+1,
        ClientEnterGame                     = 15	+1,
        ClientLeaveGame                     = 20	+1,
        ClientPing                          = 29	+1,
        ClientPingBack                      = 30	+1,

        // NOTE: add any custom opcodes in this range
        // 51 - 99

        // original tibia ONLY
        ClientAutoWalk                      = 48,
        ClientWalkNorth                     = 49,
        ClientWalkEast                      = 50,
        ClientWalkSouth                     = 51,
        ClientWalkWest                      = 52,
        ClientStop                          = 105,
        ClientWalkNorthEast                 = 54,
        ClientWalkSouthEast                 = 55,
        ClientWalkSouthWest                 = 56,
        ClientWalkNorthWest                 = 57, // 58?
        ClientTurnNorth                     = 59,
        ClientTurnEast                      = 60,
        ClientTurnSouth                     = 61,
        ClientTurnWest                      = 62,
        ClientEquipItem                     = 119	+1, // 910
        ClientMove                          = 63,
        ClientInspectNpcTrade               = 121	+1,
        ClientBuyItem                       = 122	+1,
        ClientSellItem                      = 123	+1,
        ClientCloseNpcTrade                 = 124	+1,
        ClientRequestTrade                  = 125	+1,
        ClientInspectTrade                  = 126	+1,
        ClientAcceptTrade                   = 127	+1,
        ClientRejectTrade                   = 128	+1,
        ClientUseItem                       = 64,
        ClientUseItemWith                   = 65,
        ClientUseOnCreature                 = 66,
        ClientRotateItem                    = 133	+1,
        ClientCloseContainer                = 135	+1,
        ClientUpContainer                   = 136	+1,
        ClientEditText                      = 137	+1,
        ClientEditList                      = 138	+1,
        ClientLook                          = 140	+1,
        ClientLookCreature                  = 141	+1,
        ClientTalk                          = 67,
        ClientRequestChannels               = 151	+1,
        ClientJoinChannel                   = 152	+1,
        ClientLeaveChannel                  = 153	+1,
        ClientOpenPrivateChannel            = 154	+1,
        ClientOpenRuleViolation             = 155	+1,
        ClientCloseRuleViolation            = 156	+1,
        ClientCancelRuleViolation           = 157	+1,
        ClientCloseNpcChannel               = 158	+1,
        ClientChangeFightModes              = 160	+1,
        ClientAttack                        = 68,
        ClientFollow                        = 69,
        ClientInviteToParty                 = 163	+1,
        ClientJoinParty                     = 164	+1,
        ClientRevokeInvitation              = 165	+1,
        ClientPassLeadership                = 166	+1,
        ClientLeaveParty                    = 167	+1,
        ClientShareExperience               = 168	+1,
        ClientDisbandParty                  = 169	+1,
        ClientOpenOwnChannel                = 170	+1,
        ClientInviteToOwnChannel            = 171	+1,
        ClientExcludeFromOwnChannel         = 172	+1,
        ClientCancelAttackAndFollow         = 190	+1,
        ClientUpdateTile                    = 201	+1,
        ClientRefreshContainer              = 202	+1,
        ClientBrowseField                   = 203	+1,
        ClientSeekInContainer               = 204	+1,
        ClientRequestOutfit                 = 210	+1,
        ClientChangeOutfit                  = 211	+1,
        ClientMount                         = 212	+1, // 870
        ClientAddVip                        = 220	+1,
        ClientRemoveVip                     = 221	+1,
        ClientEditVip                       = 222	+1,
        ClientBugReport                     = 230	+1,
        ClientRuleViolation                 = 231	+1,
        ClientDebugReport                   = 232	+1,
        ClientRequestQuestLog               = 240	+1,
        ClientRequestQuestLine              = 241	+1,
        ClientNewRuleViolation              = 242	+1, // 910
        ClientRequestItemInfo               = 243	+1, // 910
        ClientMarketLeave                   = 244	+1, // 944
        ClientMarketBrowse                  = 245	+1, // 944
        ClientMarketCreate                  = 246	+1, // 944
        ClientMarketCancel                  = 247	+1, // 944
        ClientMarketAccept                  = 248	+1, // 944
        ClientAnswerModalDialog             = 249	+1  // 960
    };

    enum CreatureType {
        CreatureTypePlayer = 0,
        CreatureTypeMonster,
        CreatureTypeNpc,
        CreatureTypeSummonOwn,
        CreatureTypeSummonOther
    };

    enum CreaturesIdRange {
        PlayerStartId = 0x10000000,
        PlayerEndId = 0x40000000,
        MonsterStartId = 0x40000000,
        MonsterEndId = 0x80000000,
        NpcStartId = 0x80000000,
        NpcEndId = 0xffffffff
    };

    void buildMessageModesMap(int version);
    Otc::MessageMode translateMessageModeFromServer(uint8 mode);
    uint8 translateMessageModeToServer(Otc::MessageMode mode);
}

#endif
