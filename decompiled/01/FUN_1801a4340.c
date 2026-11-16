// FUN_1801a4340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a4340 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a4340(longlong *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  short *psVar12;
  undefined1 *puVar13;
  undefined1 auStack_168 [32];
  ULONGLONG local_148;
  undefined4 local_140;
  undefined1 local_138;
  short *local_128;
  undefined1 local_120 [16];
  undefined1 *local_110;
  undefined1 local_108;
  undefined1 local_100 [32];
  longlong local_e0;
  short *local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_98;
  ulonglong local_90;
  short **local_88;
  ulonglong *local_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_30;
  
  uVar10 = DAT_180bb83c0;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  local_d8 = DAT_180bb83c8;
  if (DAT_180bb83c8 == (short *)0x0) {
    local_d0 = 0;
    psVar12 = (short *)0x0;
  }
  else {
    local_d0 = 0;
    psVar12 = DAT_180bb83c8;
    if ((*DAT_180bb83c8 == 0x5a4d) &&
       (*(int *)((longlong)*(int *)(DAT_180bb83c8 + 0x1e) + (longlong)DAT_180bb83c8) == 0x4550)) {
      local_d0 = (ulonglong)
                 *(uint *)((longlong)*(int *)(DAT_180bb83c8 + 0x1e) + 0x50 + (longlong)DAT_180bb83c8
                          );
    }
  }
  local_d0 = local_d0 + (longlong)psVar12;
  local_88 = &local_d8;
  local_80 = &local_d0;
  uVar4 = FUN_1801a49b0(&local_88,DAT_180bb83c0,0xd);
  cVar3 = FUN_1804513c0(uVar4,1,2);
  if (cVar3 == '\0') {
    cVar3 = '\0';
  }
  else {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    FUN_1801ad7c0(local_120,uVar4,uVar10);
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
    cVar3 = local_120[8];
  }
  local_e0 = local_120._0_8_;
  if (cVar3 == '\0') {
    local_e0 = 0;
  }
  if (local_e0 == 0) {
  }
  if ((DAT_180ccaa1c & 1) == 0) {
    DAT_180ccaa1c = DAT_180ccaa1c | 1;
    atexit(FUN_1806621a0);
  }
  local_148 = GetTickCount64();
  local_138 = local_108;
  local_140 = 0;
  lVar5 = FUN_1801aeca0(&DAT_1808d7e10,local_e0,local_d8,local_d0 - (longlong)local_d8);
  local_148 = GetTickCount64();
  local_138 = local_108;
  local_140 = 1;
  lVar6 = FUN_1801aeca0(&DAT_1808d7e10,local_e0,local_d8,local_d0 - (longlong)local_d8);
  FUN_1801a3db0(local_58);
  if ((local_48 == 0) && (*param_1 != param_1[1])) goto LAB_1801a4963;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  FUN_18015ba30(local_c8,
                "\n(function (members, image) {\n    var root = $.GetContextPanel();\n    if (!root || !root.IsValid()) return;\n    var active = Object.create(null);\n    members.forEach(function (id) { active[id] = true; });\n    function valid(p) { return p && p.IsValid(); }\n    function hide(badge) {\n        badge.style.visibility = \'collapse\';\n        if (valid(badge.hvhName)) badge.hvhName.style.paddingLeft = badge.hvhPadding;\n    }\n    function show(badge) {\n        if (!valid(badge) || !badge.hvhReady || !badge.hvhSeen) return;\n        if (valid(badge.hvhName)) {\n            if (badge.hvhName.BHasClass(\'playerid__name--hidden\')) return;\n            badge.hvhName.style.paddingLeft = \'28px\';\n        }\n        badge.style.visibility = \'visible\';\n    }\n    // Pooled overheads and cached scoreboard rows must not retain another\n    // player\'s badge. Hide, do not delete engine-cached paint-panel references.\n    var sb = root.id === \'Scoreboard\' ? root : root.FindChildTraverse(\'Scoreboard\');\n    var overheads = root.FindChildTraverse(\'VisiblePlayerIDs\');\n    var unused = root.FindChildTraverse(\'UnusedPlayerIDs\');\n    var previous = [];\n    var scopes = [sb, overheads, unused];\n    for (var index = 0; index < 5; ++index) scopes.push(root.FindChildTraverse(\'id-player-vanity-info-\' + index));\n    scopes.forEach(function (scope) {\n        if (valid(scope)) scope.FindChildrenWithClassTraverse(\'hvh-sync-badge\').forEach(function (badge) {\n            badge.hvhSeen = false; previous.push(badge);\n        });\n    });\n    function mount(name, overhead) {\n        if (!valid(name)) return;\n        var parent = name.GetParent();\n        if (!valid(parent)) return;\n        var badge = parent.FindChildTraverse(\'HvhgodSyncBadge\');\n        if (!valid(badge)) {\n            badge = $.CreatePanel(\'Image\', parent, \'HvhgodSyncBadge\');\n            badge.AddClass(\'hvh-sync-badge\');\n            badge.hittest = false;\n            badge.hittestchildren = false;\n            badge.scaling = \'stretch-to-fit-preserve-aspect\';\n            hide(badge);\n            $.R..." /* TRUNCATED STRING LITERAL */
                ,0x16e7);
  local_120 = ZEXT816(0);
  FUN_1801b9310(local_120,param_1);
  local_140 = 0;
  puVar7 = (undefined8 *)FUN_1800f4710(local_120,local_100,0xffffffff);
  puVar11 = local_c8;
  if (0xf < (ulonglong)local_b8._8_8_) {
    puVar11 = (undefined1 *)local_c8._0_8_;
  }
  if (((ulonglong)local_b8._0_8_ < 0xf) ||
     (puVar13 = puVar11 + local_b8._0_8_,
     puVar8 = (undefined1 *)thunk_FUN_1805f9970(puVar11,puVar13,"__HVH_MEMBERS__",0xf),
     puVar8 == puVar13)) {
    lVar9 = -1;
  }
  else {
    lVar9 = (longlong)puVar8 - (longlong)puVar11;
  }
  local_148 = puVar7[2];
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  FUN_1801b3ca0(local_c8,lVar9,0xf,puVar7);
  FUN_18015c010(local_100);
  FUN_1801409d0(local_120 + 8,local_120[0]);
  local_120 = ZEXT816(0);
  FUN_1801409d0(local_120 + 8,0);
  local_120[0] = 3;
  FUN_180111c50(&local_128,local_58);
  local_120._8_8_ = local_128;
  local_140 = 0;
  puVar7 = (undefined8 *)FUN_1800f4710(local_120,local_100,0xffffffff);
  puVar11 = local_c8;
  if (0xf < (ulonglong)local_b8._8_8_) {
    puVar11 = (undefined1 *)local_c8._0_8_;
  }
  if (((ulonglong)local_b8._0_8_ < 0xd) ||
     (puVar13 = puVar11 + local_b8._0_8_,
     puVar8 = (undefined1 *)thunk_FUN_1805f9970(puVar11,puVar13,"__HVH_IMAGE__",0xd),
     puVar8 == puVar13)) {
    lVar9 = -1;
  }
  else {
    lVar9 = (longlong)puVar8 - (longlong)puVar11;
  }
  local_148 = puVar7[2];
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  FUN_1801b3ca0(local_c8,lVar9,0xd,puVar7);
  FUN_18015c010(local_100);
  FUN_1801409d0(local_120 + 8,local_120[0]);
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  local_90 = 0;
  FUN_18015ba30(local_a8,
                "\n(function(profiles){\n var root=$.GetContextPanel();if(!root || !root.IsValid())return;\n for(var i=0;i<16 && root.GetParent();++i)root=root.GetParent();\n var data=root.Data(),state=data.HVHSyncCosmetics;\n if(!state){\n  if(!Object.keys(profiles).length)return;\n  state=data.HVHSyncCosmetics={lease:0,profiles:{},owned:{},events:[],dirty:true};\n  state.update=function(){\n   if(!root.IsValid())return;\n   var expired=Date.now()-state.lease>500,playing=GameStateAPI.IsLocalPlayerPlayingMatch();\n   if(playing || expired){\n    if(!playing)state.restore();\n    for(var event of state.events)$.UnregisterForUnhandledEvent(event[0],event[1]);\n    state.events=[];delete data.HVHSyncCosmetics;return;\n   }\n   var panel=root.FindChildTraverse(\'JsMainmenu_Vanity\');if(!panel || !panel.IsValid())return;\n   var seen={};\n   for(var index=0;index<Math.min(5,PartyListAPI.GetCount());++index){\n    var id=PartyListAPI.GetXuidByIndex(index);if(id===MyPersonaAPI.GetXuid())continue;\n    var profile=state.profiles[id],native=PartyListAPI.GetPartyMemberVanity(id).split(\',\');\n    if(!profile || (native[0]!==\'t\' && native[0]!==\'ct\'))continue;\n    var side=profile[native[0]];if(!side)continue;\n    var name=native[4]?InventoryAPI.GetItemDefinitionName(native[4]):\'\';\n    var weapon=side.items[name] || (name.indexOf(\'knife\')>=0?side.knife:\'\') || native[4] || \'\';\n    var character=side.character || native[1] || \'\',gloves=side.model?\'\':(side.gloves || native[2] || \'\');\n    var key=[index,native.join(\',\'),character,weapon,gloves,side.model].join(\'|\');seen[id]=true;\n    var previous=state.owned[id];\n    if(previous && previous.key===key && previous.panel===panel && !state.dirty)continue;\n    if(panel.SetActiveCharacter(index)===false)continue;\n    // Record ownership before native calls: a partial/deferred apply must also\n    // be restored on opt-out. Never alter party or server loadout metadata.\n    state.owned[id]={index:index,key:key,panel:panel};\n    if(!side.model && character)panel.SetPlayerCharacterItemID(character);\n    panel.EquipPlayerWithItem(..." /* TRUNCATED STRING LITERAL */
                ,0xdfc);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 0;
  FUN_18015ba30(local_78,"__HVH_COSMETICS__",0x11);
  uVar10 = FUN_1801a2860(local_120);
  local_140 = 0;
  puVar7 = (undefined8 *)FUN_1800f4710(uVar10,local_100,0xffffffff);
  uVar2 = local_68;
  puVar11 = local_78;
  if (0xf < local_60) {
    puVar11 = (undefined1 *)local_78._0_8_;
  }
  puVar13 = local_a8;
  if (0xf < local_90) {
    puVar13 = (undefined1 *)local_a8._0_8_;
  }
  if (local_98 < local_68) {
LAB_1801a4795:
    lVar9 = -1;
  }
  else if (local_68 == 0) {
    lVar9 = 0;
  }
  else {
    puVar8 = puVar13 + local_98;
    puVar11 = (undefined1 *)thunk_FUN_1805f9970(puVar13,puVar8,puVar11,local_68);
    if (puVar11 == puVar8) goto LAB_1801a4795;
    lVar9 = (longlong)puVar11 - (longlong)puVar13;
  }
  local_148 = puVar7[2];
  if (0xf < (ulonglong)puVar7[3]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  FUN_1801b3ca0(local_a8,lVar9,uVar2,puVar7);
  FUN_18015c010(local_100);
  FUN_1801409d0(local_120 + 8,local_120[0]);
  local_120._8_8_ = &local_e0;
  local_120._0_8_ = &local_88;
  local_110 = local_c8;
  FUN_1801a4ab0(local_120,lVar5);
  if ((lVar6 != 0) && ((lVar6 == lVar5 || (cVar3 = FUN_1801a4ab0(local_120,lVar6), cVar3 != '\0'))))
  {
    lVar5 = local_e0;
    puVar11 = local_a8;
    if (0xf < local_90) {
      puVar11 = (undefined1 *)local_a8._0_8_;
    }
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar5 == 0) {
      bVar1 = false;
    }
    else {
      local_128 = (short *)0x0;
      cVar3 = FUN_1804514f0(&local_128,lVar5,8);
      if (cVar3 == '\0') {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    psVar12 = local_128;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if ((bVar1) && (psVar12 != (short *)0x0)) {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      psVar12 = psVar12 + 0x134;
      if (psVar12 == (short *)0x0) {
        bVar1 = false;
      }
      else {
        local_128 = (short *)0x0;
        cVar3 = FUN_1804514f0(&local_128,psVar12,8);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      psVar12 = local_128;
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if (!bVar1) {
        psVar12 = (short *)0x0;
      }
    }
    else {
      psVar12 = (short *)0x0;
    }
    if ((psVar12 < *local_88) || ((short *)*local_80 <= psVar12)) {
      psVar12 = (short *)0x0;
    }
    cVar3 = FUN_1804513c0(psVar12,1,2);
    if (cVar3 != '\0') {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      FUN_1801af860(psVar12,lVar5,lVar6,puVar11);
      lVar5 = FUN_18017ea70();
      if (*(int *)(lVar5 + 4) != 0) {
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
      }
    }
  }
  FUN_18015c010(local_78);
  FUN_18015c010(local_a8);
  FUN_18015c010(local_c8);
LAB_1801a4963:
  FUN_18015c010(local_58);
}



