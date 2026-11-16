// FUN_18044ffb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044ffb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044ffb0(void)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined *local_98;
  char local_90;
  char *local_88;
  longlong local_80;
  char *local_78;
  longlong local_70;
  undefined2 local_68 [4];
  longlong *local_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_48;
  ulonglong local_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_60 = (longlong *)0x0;
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_18010f0f0(&local_60);
  iVar5 = FUN_1805f68d0(&DAT_1808e4ee0);
  uVar11 = local_40;
  uVar14 = uStack_48;
  lVar7 = lStack_50;
  lVar8 = lStack_58;
  plVar3 = local_60;
  plVar10 = DAT_180bbb168;
  if (iVar5 != 0) goto LAB_1804505e3;
  if (DAT_1808e4f2c == 0x7fffffff) {
LAB_1804505ce:
    DAT_1808e4f2c = 0x7ffffffe;
LAB_1804505d8:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180bbb188 != 0) {
    local_60 = DAT_180bbb168;
    DAT_180bbb168 = plVar3;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&local_60;
    }
    if (DAT_180bbb168 != (longlong *)0x0) {
      *DAT_180bbb168 = (longlong)&DAT_180bbb168;
    }
    lStack_58 = DAT_180bbb170;
    DAT_180bbb170 = lVar8;
    lStack_50 = DAT_180bbb178;
    DAT_180bbb178 = lVar7;
    uStack_48 = DAT_180bbb180;
    DAT_180bbb180 = uVar14;
    local_40 = DAT_180bbb188;
    DAT_180bbb188 = uVar11;
    FUN_1805f68fc(&DAT_1808e4ee0);
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar7 = DAT_180b0a3a0;
    lVar8 = DAT_1808da460;
    uVar14 = 1000;
    if ((DAT_180b0a3a0 != DAT_1808da460) || (lVar9 = DAT_180c7df08, DAT_180c7df08 == 0)) {
      UVar6 = GetTickCount64();
      if ((lVar7 == lVar8) && (UVar6 < DAT_180c7df10)) {
        lVar9 = 0;
      }
      else {
        local_98 = &DAT_180b0a3b0;
        iVar5 = FUN_1805f68d0(&DAT_180b0a3b0);
        if (iVar5 != 0) goto LAB_1804505e3;
        if (DAT_180b0a3fc == 0x7fffffff) {
          DAT_180b0a3fc = 0x7ffffffe;
          goto LAB_1804505d8;
        }
        if (DAT_180b0a3a0 == lVar8) {
          if ((DAT_180c7df08 == 0) && (DAT_180c7df10 <= UVar6)) goto LAB_1804501a8;
        }
        else {
          DAT_180b0a400 = 1000;
LAB_1804501a8:
          lVar7 = -1;
          do {
            local_80 = lVar7 + 1;
            pcVar1 = "lient.dll:488D0D????????>E8????????4885C0488D48E0490F44CC4885C974" + lVar7;
            lVar7 = local_80;
          } while (*pcVar1 != '\0');
          local_88 = "client.dll:488D0D????????>E8????????4885C0488D48E0490F44CC4885C974";
          local_78 = "patterns::find_hud_element";
          local_70 = 0x1a;
          DAT_180c7df08 = FUN_1800e5d20(&local_78,&local_88);
          DAT_180b0a3a0 = lVar8;
          DAT_180c7df10 = 0xffffffffffffffff;
          if (DAT_180c7df08 == 0) {
            DAT_180c7df10 = DAT_180b0a400 + UVar6;
            if (DAT_180b0a400 < 60000) {
              DAT_180b0a400 = DAT_180b0a400 * 2;
            }
            else {
              DAT_180b0a400 = 60000;
            }
          }
          else {
            DAT_180b0a400 = 1000;
          }
        }
        lVar9 = DAT_180c7df08;
        FUN_1805f68fc(&DAT_180b0a3b0);
      }
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar7 = DAT_180b0a338;
    lVar8 = DAT_1808da460;
    if ((DAT_180b0a338 != DAT_1808da460) || (lVar13 = DAT_180c7df18, DAT_180c7df18 == 0)) {
      UVar6 = GetTickCount64();
      if ((lVar7 == lVar8) && (UVar6 < DAT_180c7def8)) {
        lVar13 = 0;
      }
      else {
        local_98 = &DAT_180b0a350;
        iVar5 = FUN_1805f68d0(&DAT_180b0a350);
        if (iVar5 != 0) goto LAB_1804505e3;
        if (DAT_180b0a39c == 0x7fffffff) {
          DAT_180b0a39c = 0x7ffffffe;
          goto LAB_1804505d8;
        }
        if (DAT_180b0a338 == lVar8) {
          if ((DAT_180c7df18 == 0) && (DAT_180c7def8 <= UVar6)) goto LAB_180450311;
        }
        else {
          DAT_180b0a340 = 1000;
LAB_180450311:
          lVar7 = -1;
          do {
            local_70 = lVar7 + 1;
            lVar13 = lVar7 + 1;
            lVar7 = local_70;
          } while ("client.dll:>E8????????4C39B558140000"[lVar13] != '\0');
          local_78 = "client.dll:>E8????????4C39B558140000";
          local_88 = "patterns::set_voice_data";
          local_80 = 0x18;
          DAT_180c7df18 = FUN_1800e5d20(&local_88,&local_78);
          DAT_180b0a338 = lVar8;
          DAT_180c7def8 = 0xffffffffffffffff;
          if (DAT_180c7df18 == 0) {
            DAT_180c7def8 = DAT_180b0a340 + UVar6;
            uVar14 = DAT_180b0a340 * 2;
            if (59999 < DAT_180b0a340) {
              uVar14 = 60000;
            }
          }
          DAT_180b0a340 = uVar14;
        }
        lVar13 = DAT_180c7df18;
        FUN_1805f68fc(&DAT_180b0a350);
      }
    }
    if (lVar9 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      cVar4 = FUN_1804513c0(lVar9,1,2);
      if (cVar4 == '\0') {
        puVar12 = (undefined *)0x0;
      }
      else {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        FUN_1801ad7c0(&local_98,lVar9,"CCSGO_HudVoiceStatus");
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        puVar12 = local_98;
        if (local_90 == '\0') {
          puVar12 = (undefined *)0x0;
        }
      }
    }
    cVar4 = DAT_180c7df00;
    if ((lVar13 != 0) && ((undefined *)0x1f < puVar12)) {
      uVar11 = local_40 + uStack_48;
      for (uVar14 = uStack_48; uVar14 != uVar11; uVar14 = uVar14 + 1) {
        plVar10 = *(longlong **)(lStack_58 + (lStack_50 - 1U & uVar14) * 8);
        uVar2 = plVar10[4];
        UVar6 = GetTickCount64();
        if (UVar6 < uVar2) {
          local_68[0] = 1;
          if (0xf < (ulonglong)plVar10[3]) {
            plVar10 = (longlong *)*plVar10;
          }
          cVar4 = FUN_1804513c0(lVar13,1,2);
          if (cVar4 != '\0') {
            lVar8 = FUN_18017ea70();
            *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
            local_a8 = local_68;
            cVar4 = FUN_180450750(lVar13,puVar12 + -0x20,plVar10);
            lVar8 = FUN_18017ea70();
            if (*(int *)(lVar8 + 4) != 0) {
              *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
            }
            if (cVar4 != '\0') goto LAB_1804504bb;
          }
          FUN_1800a9e50(2,"Chat log native delivery failed.");
          break;
        }
LAB_1804504bb:
      }
      goto LAB_180450584;
    }
    LOCK();
    DAT_180c7df00 = '\x01';
    UNLOCK();
    if (cVar4 == '\0') {
      FUN_1800a9e50(2,"Chat log delivery unavailable; native HUD/pattern missing.");
    }
    local_98 = &DAT_1808e4ee0;
    iVar5 = FUN_1805f68d0(&DAT_1808e4ee0);
    if (iVar5 != 0) {
LAB_1804505e3:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e4f2c == 0x7fffffff) goto LAB_1804505ce;
    uVar11 = local_40 + uStack_48;
    for (uVar14 = uStack_48; uVar14 != uVar11; uVar14 = uVar14 + 1) {
      lVar8 = *(longlong *)(lStack_58 + (lStack_50 - 1U & uVar14) * 8);
      uVar2 = *(ulonglong *)(lVar8 + 0x20);
      UVar6 = GetTickCount64();
      if ((UVar6 < uVar2) && (DAT_180bbb188 < 0x10)) {
        FUN_1804505f0(extraout_XMM0_Qa,lVar8);
      }
    }
  }
  FUN_1805f68fc(&DAT_1808e4ee0);
LAB_180450584:
  FUN_180450790(&local_60);
  plVar10 = local_60;
  local_60 = (longlong *)0x0;
  FUN_1804547d0(plVar10,0x10);
}



