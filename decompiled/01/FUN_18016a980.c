// FUN_18016a980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016a980 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_18016a980(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t sVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_808 [32];
  undefined **local_7e8;
  longlong *local_7e0;
  longlong local_7d8;
  undefined1 local_7c8 [16];
  undefined1 auStack_7b8 [16];
  undefined1 local_7a8 [16];
  undefined1 auStack_798 [16];
  undefined1 local_788 [16];
  undefined1 auStack_778 [16];
  undefined1 local_768 [24];
  undefined1 local_750 [16];
  undefined8 local_740;
  undefined1 local_738 [24];
  undefined1 local_720 [16];
  undefined8 local_710;
  undefined1 local_708 [24];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [16];
  undefined1 auStack_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 auStack_6a8 [16];
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined1 local_680 [16];
  undefined8 local_670;
  undefined1 local_668 [16];
  undefined8 local_658;
  undefined1 local_650 [8];
  longlong local_648 [192];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_808;
  uVar8 = param_3[2];
  plVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar6 = (longlong *)*param_2;
  }
  FUN_18063ab10(local_648,0,0x600);
  local_7e8 = (undefined **)plVar6;
  local_7e0 = (longlong *)uVar8;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"id=%s bytes=%zu");
  local_7e8 = &PTR_180700558;
  if ((char)local_648[0] != '\0') {
    local_7e8 = (undefined **)&DAT_1806bcfc0;
  }
  local_7e0 = local_648;
  FUN_1800f6900(0);
  puVar12 = DAT_180bb8b20;
  puVar11 = DAT_180bb8b18;
  puVar10 = DAT_180bb8b18;
  if (DAT_180bb8b18 != DAT_180bb8b20) {
    uVar1 = param_2[3];
    sVar2 = param_2[2];
    do {
      plVar6 = param_2;
      if (0xf < uVar1) {
        plVar6 = (longlong *)*param_2;
      }
      sVar3 = puVar10[2];
      puVar9 = puVar10;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar9 = (undefined8 *)*puVar10;
      }
    } while (((sVar3 != sVar2) ||
             ((sVar3 != 0 && (iVar5 = memcmp(puVar9,plVar6,sVar3), iVar5 != 0)))) &&
            (puVar10 = puVar10 + 0x2d, puVar10 != puVar12));
  }
  sVar2 = DAT_180bb8ee0;
  if (puVar10 == puVar12) {
    FUN_180113930(&DAT_180bb8f50,"Select a config before saving.",0x1e);
  }
  if (*(char *)((longlong)puVar10 + 0xe1) != '\0') {
    FUN_180113930(&DAT_180bb8f50,"Workshop configs are read only.",0x1f);
  }
  for (; puVar11 != puVar12; puVar11 = puVar11 + 0x2d) {
    puVar9 = &DAT_180bb8ed0;
    if (0xf < DAT_180bb8ee8) {
      puVar9 = DAT_180bb8ed0;
    }
    sVar3 = puVar11[2];
    _Buf1 = puVar11;
    if (0xf < (ulonglong)puVar11[3]) {
      _Buf1 = (undefined8 *)*puVar11;
    }
    if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar5 = memcmp(_Buf1,puVar9,sVar3), iVar5 == 0))))
    break;
  }
  if (*(char *)((longlong)puVar10 + 0xe3) == '\0') {
    if ((puVar11 != puVar12) &&
       ((*(char *)((longlong)puVar11 + 0xe1) != '\0' ||
        (*(char *)((longlong)puVar11 + 0xe3) != '\0')))) {
      FUN_180113930(&DAT_180bb8f50,
                    "Load your personal config before saving. Workshop edits belong in a private fork."
                    ,0x51);
    }
    if (*(char *)((longlong)puVar10 + 0xe2) != '\0') {
      if (puVar10 + 0x18 != param_3) {
        puVar11 = param_3;
        if (0xf < (ulonglong)param_3[3]) {
          puVar11 = (undefined8 *)*param_3;
        }
        FUN_180113930(puVar10 + 0x18,puVar11,param_3[2]);
      }
      plVar6 = (longlong *)FUN_180177bd0(&DAT_180bb8f10,local_788,param_2);
      if ((undefined8 *)(*plVar6 + 0x30) != param_3) {
        puVar11 = param_3;
        if (0xf < (ulonglong)param_3[3]) {
          puVar11 = (undefined8 *)*param_3;
        }
        FUN_180113930((undefined8 *)(*plVar6 + 0x30),puVar11,param_3[2]);
      }
      puVar11 = DAT_180bb8b38;
      if (DAT_180bb8b30 != DAT_180bb8b38) {
        uVar1 = param_2[3];
        sVar2 = param_2[2];
        puVar12 = DAT_180bb8b30;
        do {
          plVar6 = param_2;
          if (0xf < uVar1) {
            plVar6 = (longlong *)*param_2;
          }
          sVar3 = puVar12[2];
          puVar9 = puVar12;
          if (0xf < (ulonglong)puVar12[3]) {
            puVar9 = (undefined8 *)*puVar12;
          }
          if ((sVar3 == sVar2) &&
             ((sVar3 == 0 || (iVar5 = memcmp(puVar9,plVar6,sVar3), iVar5 == 0)))) {
            if (puVar12 + 0x18 != param_3) {
              puVar11 = param_3;
              if (0xf < (ulonglong)param_3[3]) {
                puVar11 = (undefined8 *)*param_3;
              }
              FUN_180113930(puVar12 + 0x18,puVar11,param_3[2]);
            }
            break;
          }
          puVar12 = puVar12 + 0x2d;
        } while (puVar12 != puVar11);
      }
      FUN_180113930(&DAT_180bb8f50,"Dummy config saved locally.",0x1b);
      local_7d8 = param_2[2];
      if (0x7fffffffffffffffU - local_7d8 < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (longlong *)*param_2;
      }
      local_7e8 = (undefined **)0x5;
      local_7e0 = param_2;
      FUN_18015a9c0(local_708);
      pauVar7 = (undefined1 (*) [16])FUN_18015b2a0(local_708,&DAT_180700de4,1);
      local_7c8 = *pauVar7;
      auStack_7b8 = pauVar7[1];
      (*pauVar7)[0] = 0;
      *(undefined8 *)pauVar7[1] = 0;
      *(undefined8 *)(pauVar7[1] + 8) = 0xf;
      puVar11 = param_3 + 2;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      pauVar7 = (undefined1 (*) [16])FUN_18015b2a0(local_7c8,param_3,*puVar11);
      local_788 = *pauVar7;
      auStack_778 = pauVar7[1];
      (*pauVar7)[0] = 0;
      *(undefined8 *)pauVar7[1] = 0;
      *(undefined8 *)(pauVar7[1] + 8) = 0xf;
      FUN_18016e0a0(&DAT_180bb8af0,local_788);
      FUN_18015c010(local_788);
      FUN_18015c010(local_7c8);
      FUN_18015c010(local_708);
      puVar11 = puVar10 + 4;
      if (0x7fffffffffffffff - puVar10[6] < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (0xf < (ulonglong)puVar10[7]) {
        puVar11 = (undefined8 *)*puVar11;
      }
      local_7e8 = (undefined **)0x7;
      local_7e0 = puVar11;
      local_7d8 = puVar10[6];
      FUN_18015a9c0(local_768);
      pauVar7 = (undefined1 (*) [16])FUN_18015b2a0(local_768,"\' locally",9);
      local_6d8 = *pauVar7;
      auStack_6c8 = pauVar7[1];
      (*pauVar7)[0] = 0;
      *(undefined8 *)pauVar7[1] = 0;
      *(undefined8 *)(pauVar7[1] + 8) = 0xf;
      FUN_18016df60(&DAT_180bb8af0,local_6d8,1);
      FUN_18015c010(local_6d8);
      FUN_18015c010(local_768);
    }
    local_7d8 = param_2[2];
    if (0x7fffffffffffffffU - local_7d8 < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_7e0 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_7e0 = (longlong *)*param_2;
    }
    local_7e8 = (undefined **)0x5;
    FUN_18015a9c0(local_738);
    pauVar7 = (undefined1 (*) [16])FUN_18015b2a0(local_738,&DAT_180700de4,1);
    local_7a8 = *pauVar7;
    auStack_798 = pauVar7[1];
    (*pauVar7)[0] = 0;
    *(undefined8 *)pauVar7[1] = 0;
    *(undefined8 *)(pauVar7[1] + 8) = 0xf;
    puVar11 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar11 = (undefined8 *)*param_3;
    }
    pauVar7 = (undefined1 (*) [16])FUN_18015b2a0(local_7a8,puVar11,param_3[2]);
    local_6b8 = *pauVar7;
    auStack_6a8 = pauVar7[1];
    (*pauVar7)[0] = 0;
    *(undefined8 *)pauVar7[1] = 0;
    *(undefined8 *)(pauVar7[1] + 8) = 0xf;
    cVar4 = FUN_18016e0a0(&DAT_180bb8af0,local_6b8);
    FUN_18015c010(local_6b8);
    FUN_18015c010(local_7a8);
    FUN_18015c010(local_738);
    if (cVar4 == '\0') {
    }
    local_7e8 = (undefined **)(puVar10 + 8);
    FUN_18016d990(&DAT_180bb8af0,1,param_2,puVar10 + 4);
    if (puVar10 + 0x18 != param_3) {
      puVar11 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        puVar11 = (undefined8 *)*param_3;
      }
      FUN_180113930(puVar10 + 0x18,puVar11,param_3[2]);
    }
    plVar6 = (longlong *)FUN_180177bd0(&DAT_180bb8f10,local_788,param_2);
    puVar10 = (undefined8 *)(*plVar6 + 0x30);
LAB_18016b211:
    if (puVar10 != param_3) {
      puVar11 = param_3 + 2;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      FUN_180113930(puVar10,param_3,*puVar11);
    }
  }
  else {
    puVar11 = &DAT_180bb8cb0;
    if (0xf < DAT_180bb8cc8) {
      puVar11 = DAT_180bb8cb0;
    }
    sVar3 = param_2[2];
    uVar1 = param_2[3];
    plVar6 = param_2;
    if (0xf < uVar1) {
      plVar6 = (longlong *)*param_2;
    }
    if ((sVar3 == DAT_180bb8cc0) &&
       ((sVar3 == 0 || (iVar5 = memcmp(plVar6,puVar11,sVar3), iVar5 == 0)))) {
      puVar11 = &DAT_180bb8ed0;
      if (0xf < DAT_180bb8ee8) {
        puVar11 = DAT_180bb8ed0;
      }
      plVar6 = param_2;
      if (0xf < uVar1) {
        plVar6 = (longlong *)*param_2;
      }
      if ((sVar3 == sVar2) && ((sVar3 == 0 || (iVar5 = memcmp(plVar6,puVar11,sVar3), iVar5 == 0))))
      {
        FUN_1800e60e0(local_708,"action");
        FUN_1800e60e0(local_6f0,&DAT_180700db8);
        local_7c8._8_8_ = local_6d8;
        local_7c8._0_8_ = local_708;
        FUN_1800f4e90(local_698,local_7c8,1,2);
        local_688 = 0;
        FUN_1800e60e0(local_768,&DAT_1806bc068);
        FUN_1800e64d0(local_750,param_2);
        local_740 = 0;
        local_7c8._0_8_ = local_768;
        local_7c8._8_8_ = local_738;
        FUN_1800f4e90(local_680,local_7c8,1,2);
        local_670 = 0;
        FUN_1800e60e0(local_738,"payload");
        FUN_1800e64d0(local_720,param_3);
        local_710 = 0;
        local_7c8._0_8_ = local_738;
        local_7c8._8_8_ = local_708;
        FUN_1800f4e90(local_668,local_7c8,1,2);
        local_658 = 0;
        local_7c8._8_8_ = local_650;
        local_7c8._0_8_ = local_698;
        uVar8 = FUN_1800f4e90(local_788,local_7c8,1,2);
        cVar4 = FUN_180172820(&DAT_180bb8af0,uVar8);
        _eh_vector_destructor_iterator_(local_698,0x18,3,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_738,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_768,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_708,0x18,2,FUN_1800aab30);
        if (cVar4 == '\0') {
        }
        if (param_3 != &DAT_180bb8cd0) {
          puVar11 = param_3;
          if (0xf < (ulonglong)param_3[3]) {
            puVar11 = (undefined8 *)*param_3;
          }
          FUN_180113930(&DAT_180bb8cd0,puVar11,param_3[2]);
        }
        puVar10 = puVar10 + 0x18;
        goto LAB_18016b211;
      }
    }
    local_7a8 = (undefined1  [16])0x0;
    auStack_798 = (undefined1  [16])0x0;
    FUN_18015ba30(local_7a8,"Load the private fork before saving.",0x24);
    FUN_18016df60(&DAT_180bb8af0,local_7a8,0);
    FUN_18015c010(local_7a8);
  }
}



