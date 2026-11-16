// FUN_1803ed240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ed240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1803ed240(char param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  size_t sVar8;
  undefined8 uVar9;
  char cVar10;
  undefined1 uVar11;
  char cVar12;
  ULONGLONG UVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  longlong *plVar18;
  undefined1 *puVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 **_Buf2;
  char cVar22;
  int iVar23;
  undefined **ppuVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined **ppuVar27;
  undefined2 *puVar28;
  undefined1 auStackY_9a8 [32];
  undefined2 local_968;
  uint local_964;
  undefined1 local_958 [16];
  undefined1 auStack_948 [16];
  undefined1 local_938 [24];
  undefined1 local_920 [16];
  undefined8 local_910;
  longlong local_908;
  longlong lStack_900;
  longlong lStack_8f8;
  undefined1 auStack_8f0 [16];
  undefined8 local_8e0;
  undefined8 ****local_8d8;
  longlong lStack_8d0;
  size_t sStack_8c8;
  undefined1 auStack_8c0 [16];
  undefined8 local_8b0;
  undefined1 local_8a8 [16];
  undefined8 uStack_898;
  undefined8 auStack_890 [2];
  undefined8 local_880;
  undefined1 local_878 [16];
  undefined1 auStack_868 [16];
  undefined1 local_858 [16];
  undefined8 local_848;
  undefined1 local_840 [16];
  undefined8 local_830;
  undefined1 local_828 [16];
  undefined8 local_818;
  undefined1 local_810 [16];
  undefined8 local_800;
  undefined1 local_7f8 [16];
  undefined8 local_7e8;
  undefined1 local_7e0 [8];
  undefined8 ***local_7d8 [2];
  longlong local_7c8 [2];
  undefined8 ****local_7b8 [2];
  longlong local_7a8;
  ulonglong local_7a0;
  undefined1 local_798 [16];
  undefined8 local_788;
  ulonglong local_780;
  undefined1 local_778 [16];
  undefined8 local_768;
  ulonglong local_760;
  undefined1 local_758 [8];
  undefined1 local_750 [8];
  undefined8 ****local_748;
  longlong lStack_740;
  size_t sStack_738;
  longlong alStack_730 [2];
  undefined8 local_720;
  undefined1 local_718 [64];
  undefined8 ****local_6d8 [2];
  undefined8 local_6c8;
  ulonglong local_6c0;
  char local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_9a8;
  uVar25 = 0;
  local_964 = 0;
  if ((DAT_180cd42e4 & 1) == 0) {
    DAT_180cd42e4 = DAT_180cd42e4 | 1;
    atexit(FUN_180663030);
  }
  UVar13 = GetTickCount64();
  if (((param_1 != '\0') || (DAT_180c7c460 <= UVar13)) && (DAT_1808d9bd9 == '\0')) {
    DAT_180c7c460 = UVar13 + 100;
    _eh_vector_constructor_iterator_(local_7d8,0x20,2,FUN_18015b0f0,thunk_FUN_18015c010);
    local_968 = 0;
    iVar23 = 2;
    puVar28 = &local_968;
    plVar18 = local_7c8;
    ppppuVar21 = local_7d8;
    do {
      FUN_1801ef200(local_718,iVar23);
      if (((local_640 != '\0') && (cVar10 = FUN_1801efc70(local_718), cVar10 != '\0')) &&
         ((undefined8 *****)ppppuVar21 != local_6d8)) {
        ppppuVar20 = local_6d8;
        if (0xf < local_6c0) {
          ppppuVar20 = local_6d8[0];
        }
        FUN_180113930(ppppuVar21,ppppuVar20,local_6c8);
      }
      FUN_1801ab310(local_718);
      if (*plVar18 == 0) {
        lVar14 = FUN_1800ce230(&DAT_180cc8140,local_938,iVar23);
        uVar25 = 1;
        local_964 = 1;
        if (*(longlong *)(lVar14 + 0x10) == 0) goto LAB_1803ed3b3;
        uVar11 = 1;
      }
      else {
LAB_1803ed3b3:
        uVar11 = 0;
      }
      *(undefined1 *)puVar28 = uVar11;
      if (uVar25 != 0) {
        uVar25 = 0;
        local_964 = 0;
        FUN_18015c010(local_938);
      }
      iVar7 = DAT_180c63130;
      iVar23 = iVar23 + 1;
      ppppuVar21 = ppppuVar21 + 4;
      plVar18 = plVar18 + 4;
      puVar28 = (undefined2 *)((longlong)puVar28 + 1);
    } while (iVar23 < 4);
    cVar10 = local_968._1_1_;
    cVar22 = (char)local_968;
    if (((local_7c8[0] != 0) || (local_7a8 != 0)) ||
       ((cVar22 != '\0' || ((local_968._1_1_ != '\0' || (DAT_1809bb3c8 != 0)))))) {
      lVar14 = (longlong)DAT_180c63130;
      FUN_1800e60e0(local_8a8,&DAT_1806bdfcc);
      FUN_1800e64d0(auStack_890,local_7d8);
      local_880 = 0;
      local_958._8_8_ = local_878;
      local_958._0_8_ = local_8a8;
      FUN_1800f4e90(local_858,local_958,1,2);
      local_848 = 0;
      FUN_1800e60e0(&local_748,&DAT_1806be004);
      FUN_1800e64d0(alStack_730,local_7b8);
      local_720 = 0;
      local_958._8_8_ = local_718;
      local_958._0_8_ = &local_748;
      FUN_1800f4e90(local_840,local_958,1,2);
      local_830 = 0;
      FUN_1800e60e0(&local_908,"t_pending");
      auStack_8f0 = ZEXT816(0);
      FUN_1801409d0(auStack_8f0 + 8,0);
      auStack_8f0[0] = 4;
      local_958[0] = cVar22;
      auStack_8f0._8_8_ = local_958._0_8_;
      local_8e0 = 0;
      local_958._8_8_ = &local_8d8;
      local_958._0_8_ = &local_908;
      FUN_1800f4e90(local_828,local_958,1,2);
      local_818 = 0;
      FUN_1800e60e0(local_938,"ct_pending");
      local_920 = ZEXT816(0);
      FUN_1801409d0(local_920 + 8,0);
      local_920[0] = 4;
      local_958[0] = cVar10;
      local_920._8_8_ = local_958._0_8_;
      local_910 = 0;
      local_958._0_8_ = local_938;
      local_958._8_8_ = &local_908;
      FUN_1800f4e90(local_810,local_958,1,2);
      local_800 = 0;
      FUN_1800e60e0(&local_8d8,&DAT_1807c5d6c);
      auStack_8c0 = ZEXT816(0);
      FUN_1801409d0(auStack_8c0 + 8,0);
      auStack_8c0[0] = 5;
      auStack_8c0._8_8_ = lVar14;
      local_8b0 = 0;
      local_958._0_8_ = &local_8d8;
      local_958._8_8_ = local_8a8;
      FUN_1800f4e90(local_7f8,local_958,1,2);
      local_7e8 = 0;
      local_958._8_8_ = local_7e0;
      local_958._0_8_ = local_858;
      FUN_1800f4e90(local_758,local_958,1,2);
      _eh_vector_destructor_iterator_(local_858,0x18,5,FUN_1800aab30);
      _eh_vector_destructor_iterator_(&local_8d8,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_938,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(&local_908,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(&local_748,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_8a8,0x18,2,FUN_1800aab30);
      local_798 = (undefined1  [16])0x0;
      local_788 = 0;
      local_780 = 0;
      FUN_18015ba30(local_798,
                    "\n(function(s) {\n    let root=$.GetContextPanel();\n    for(let i=0;i<16 && root.GetParent();++i) root=root.GetParent();\n    const data=root.Data();\n    const report=error=>{\n        if(data.HVHLocalAgentError!==String(error)) {\n            data.HVHLocalAgentError=String(error);$.Msg(\'[HVHGOD] Lobby agent unavailable: \'+error);\n        }\n    };\n    try {\n        if(GameStateAPI.IsLocalPlayerPlayingMatch()) return;\n        let state=data.HVHLocalAgent;\n        if(!state) {\n            if(!s.t && !s.ct && !s.t_pending && !s.ct_pending) return;\n            state=data.HVHLocalAgent={lease:0,settings:s,dirty:true,key:\'\',owned:false,events:[]};\n            state.update=function() {\n                try {\n                if(!root.IsValid() || Date.now()-state.lease>500 || GameStateAPI.IsLocalPlayerPlayingMatch()) {\n                    for(const event of state.events) $.UnregisterForUnhandledEvent(event[0],event[1]);\n                    state.events=[];delete data.HVHLocalAgent;return;\n                }\n                if(state.refreshPending)return;\n                const panel=root.FindChildTraverse(\'JsMainmenu_Vanity\');\n                if(!panel || !panel.IsValid()) return;\n                let index=0;\n                const count=Math.min(5,PartyListAPI.GetCount());\n                if(count>0) {\n                    index=-1;\n                    for(let i=0;i<count;++i) if(PartyListAPI.GetXuidByIndex(i)===MyPersonaAPI.GetXuid()) {index=i;break;}\n                    if(index<0) return;\n                }\n                const team=GameInterfaceAPI.GetSettingString(\'ui_vanitysetting_team\');\n                if(team!==\'t\' && team!==\'ct\') return;\n                // Pending resource preparation keeps the configured custom actor.\n                // An empty model is a reset only when the selection was cleared.\n                if(state.settings[team+\'_pending\'])return;\n                const custom=state.settings[team]||\'\';\n                if(!custom && !state.owned) return;\n                const character=LoadoutAPI.GetItemID(team,..." /* TRUNCATED STRING LITERAL */
                    ,0x14f6);
      local_778 = (undefined1  [16])0x0;
      local_768 = 0;
      local_760 = 0;
      FUN_18015ba30(local_778,"__HVH_LOBBY_AGENT__",0x13);
      puVar15 = (undefined8 *)FUN_1800f4710(local_758,local_938,0xffffffff);
      uVar9 = local_768;
      puVar26 = local_778;
      if (0xf < local_760) {
        puVar26 = (undefined1 *)local_778._0_8_;
      }
      puVar19 = local_798;
      if (0xf < local_780) {
        puVar19 = (undefined1 *)local_798._0_8_;
      }
      uVar16 = FUN_180159df0(puVar19,local_788,0,puVar26);
      if (0xf < (ulonglong)puVar15[3]) {
        puVar15 = (undefined8 *)*puVar15;
      }
      FUN_1801b3ca0(local_798,uVar16,uVar9,puVar15);
      FUN_18015c010(local_938);
      cVar12 = FUN_1803eca40(local_798,1,0);
      if (cVar12 != '\0') {
        if (iVar7 != 0) {
          LOCK();
          if (iVar7 == DAT_180c63130) {
            DAT_180c63130 = 0;
          }
          UNLOCK();
        }
        if ((((local_7c8[0] == 0) && (local_7a8 == 0)) && (cVar22 == '\0')) && (cVar10 == '\0')) {
          uStack_898 = 0;
          auStack_890[0] = 0xf;
          local_8a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar6[0xf] = 0;
          auVar6._0_15_ = local_8a8._1_15_;
          local_8a8 = auVar6 << 8;
          bVar5 = true;
          bVar4 = false;
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          plVar18 = (longlong *)local_8a8;
        }
        else {
          ppuVar27 = &PTR_180700558;
          if (cVar10 != '\0') {
            ppuVar27 = (undefined **)"|ct_pending";
          }
          ppuVar24 = &PTR_180700558;
          if (cVar22 != '\0') {
            ppuVar24 = (undefined **)"|t_pending";
          }
          if (local_7c8[0] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          FUN_18015a9c0(local_938);
          local_964 = uVar25 | 0x84;
          ppppuVar21 = local_7b8;
          if (0xf < local_7a0) {
            ppppuVar21 = local_7b8[0];
          }
          pauVar17 = (undefined1 (*) [16])FUN_18015b2a0(local_938,ppppuVar21,local_7a8);
          local_878 = *pauVar17;
          auStack_868 = pauVar17[1];
          *(undefined8 *)(pauVar17[1] + 8) = 0xf;
          (*pauVar17)[0] = 0;
          *(undefined8 *)pauVar17[1] = 0;
          local_964 = uVar25 | 0xcc;
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (*(char *)((longlong)ppuVar24 + lVar14) != '\0');
          pauVar17 = (undefined1 (*) [16])FUN_18015b2a0(local_878,ppuVar24);
          local_958 = *pauVar17;
          auStack_948 = pauVar17[1];
          *(undefined8 *)(pauVar17[1] + 8) = 0xf;
          (*pauVar17)[0] = 0;
          *(undefined8 *)pauVar17[1] = 0;
          local_964 = uVar25 | 0x2dc;
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (*(char *)((longlong)ppuVar27 + lVar14) != '\0');
          plVar18 = (longlong *)FUN_18015b2a0(local_958,ppuVar27);
          local_908 = *plVar18;
          lStack_900 = plVar18[1];
          lStack_8f8 = plVar18[2];
          auStack_8f0._0_8_ = plVar18[3];
          *(undefined1 *)plVar18 = 0;
          plVar18[2] = 0;
          plVar18[3] = 0xf;
          plVar18 = &local_908;
          bVar5 = false;
          bVar4 = true;
          bVar3 = true;
          bVar2 = true;
          bVar1 = true;
        }
        local_748 = (undefined8 ****)*plVar18;
        lStack_740 = plVar18[1];
        sStack_738 = plVar18[2];
        alStack_730[0] = plVar18[3];
        auStack_8c0._0_8_ = alStack_730[0];
        local_8d8 = local_748;
        lStack_8d0 = lStack_740;
        sStack_8c8 = sStack_738;
        *(undefined1 *)plVar18 = 0;
        plVar18[2] = 0;
        plVar18[3] = 0xf;
        if (bVar1) {
          FUN_18015c010(&local_908);
        }
        if (bVar2) {
          FUN_18015c010(local_958);
        }
        if (bVar3) {
          FUN_18015c010(local_878);
        }
        if (bVar4) {
          FUN_18015c010(local_938);
        }
        if (bVar5) {
          FUN_18015c010(local_8a8);
        }
        sVar8 = sStack_8c8;
        ppppuVar21 = local_8d8;
        _Buf2 = &DAT_1809bb3b8;
        if (0xf < DAT_1809bb3d0) {
          _Buf2 = (undefined8 **)DAT_1809bb3b8;
        }
        uVar9 = auStack_8c0._0_8_;
        ppppuVar20 = &local_748;
        if (0xf < (ulonglong)auStack_8c0._0_8_) {
          ppppuVar20 = local_8d8;
        }
        if ((sStack_8c8 != DAT_1809bb3c8) ||
           ((sStack_8c8 != 0 && (iVar23 = memcmp(ppppuVar20,_Buf2,sStack_8c8), iVar23 != 0)))) {
          FUN_18063ab10(local_638,0,0x600);
          FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"t=%s ct=%s visual_ack=pending");
          FUN_1800f6900(0);
        }
        ppppuVar20 = &local_748;
        if (0xf < (ulonglong)uVar9) {
          ppppuVar20 = ppppuVar21;
        }
        FUN_180113930(&DAT_1809bb3b8,ppppuVar20,sVar8);
        FUN_18015c010(&local_748);
      }
      FUN_18015c010(local_778);
      FUN_18015c010(local_798);
      FUN_1801409d0(local_750,local_758[0]);
    }
    _eh_vector_destructor_iterator_(local_7d8,0x20,2,thunk_FUN_18015c010);
  }
}



