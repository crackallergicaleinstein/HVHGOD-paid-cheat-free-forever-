// FUN_18036c2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036c2e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18036c2e0(longlong *param_1)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  char cVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined *_Buf2;
  ulonglong _Size;
  byte *_Buf1;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [16];
  undefined1 auStack_48 [16];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uVar7 = param_1[1];
  if (uVar7 < 9) {
  }
  param_1 = (longlong *)*param_1;
  lVar10 = *param_1 + -0x7365786f62796b73;
  if (lVar10 == 0) {
    lVar10 = (ulonglong)*(byte *)(param_1 + 1) - 0x2f;
  }
  if (lVar10 != 0) {
  }
  iVar9 = *(int *)((uVar7 - 5) + (longlong)param_1) + -0x6574762e;
  if (iVar9 == 0) {
    iVar9 = *(byte *)((uVar7 - 1) + (longlong)param_1) - 0x78;
  }
  if (iVar9 != 0) {
  }
  _Size = uVar7 - 0xe;
  if (uVar7 - 9 < uVar7 - 0xe) {
    _Size = uVar7 - 9;
  }
  _Buf1 = (byte *)((longlong)param_1 + 9);
  if (_Size == 0) {
  }
  if (0xf0 < _Size) {
  }
  if (_Size == 1) {
    _Buf2 = &DAT_1807c5af8;
  }
  else {
    if (_Size != 2) goto LAB_18036c3c2;
    _Buf2 = &DAT_1806be0f8;
  }
  iVar9 = memcmp(_Buf1,_Buf2,_Size);
  if (iVar9 == 0) {
  }
LAB_18036c3c2:
  pbVar1 = _Buf1 + _Size;
  if ((pbVar1[-1] != 0x2e) && (pbVar1[-1] != 0x20)) {
    local_b8 = 10;
    lVar10 = FUN_18010fae0(_Buf1,_Size);
    pbVar3 = _Buf1;
    if (lVar10 == -1) {
      for (; pbVar3 != pbVar1; pbVar3 = pbVar3 + 1) {
        if (*pbVar3 < 0x20) {
        }
      }
      FUN_18036b840(local_38);
      if (local_28 != 0) {
        FUN_1800f5370(local_a8,local_38);
        cVar4 = FUN_180165ac0(local_a8);
        if (cVar4 != '\0') {
          pauVar5 = (undefined1 (*) [16])FUN_1802e27f0(local_a8,_Buf1,pbVar1);
          lVar10 = *(longlong *)pauVar5[1];
          uVar7 = *(ulonglong *)(pauVar5[1] + 8);
          if (uVar7 - lVar10 < 7) {
            local_b8 = 7;
            pauVar5 = (undefined1 (*) [16])FUN_1803700d0(pauVar5,7);
          }
          else {
            *(longlong *)pauVar5[1] = lVar10 + 7;
            pauVar6 = pauVar5;
            if (0xf < uVar7) {
              pauVar6 = *(undefined1 (**) [16])*pauVar5;
            }
            FUN_18063aed0(*pauVar6 + lVar10,".vtex_c",7);
            (*pauVar6 + lVar10)[7] = 0;
          }
          local_58 = *pauVar5;
          auStack_48 = pauVar5[1];
          (*pauVar5)[0] = 0;
          *(undefined8 *)pauVar5[1] = 0;
          *(undefined8 *)(pauVar5[1] + 8) = 0xf;
          FUN_18015c010(local_a8);
          local_80 = local_a8;
          puVar11 = local_58;
          if (0xf < (ulonglong)auStack_48._8_8_) {
            puVar11 = (undefined1 *)local_58._0_8_;
          }
          local_98 = 0;
          local_90 = 7;
          local_a8._2_14_ = SUB1614((undefined1  [16])0x0,2);
          auVar2._14_2_ = 0;
          auVar2._0_14_ = local_a8._2_14_;
          local_a8 = auVar2 << 0x10;
          local_88 = 9;
          uVar8 = auStack_48._0_8_;
          if (auStack_48._0_8_ != 0) {
            if (0x7fffffff < (ulonglong)auStack_48._0_8_) {
                    /* WARNING: Subroutine does not return */
              FUN_18017d0c0(0x16);
            }
            local_b8 = local_b8 & 0xffffffff00000000;
            uVar7 = FUN_1805fae9c(0xfde9,puVar11,auStack_48._0_8_ & 0xffffffff,0);
            if ((int)(uVar7 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_18017cff0(uVar7 >> 0x20);
            }
            FUN_180176ba0(local_a8,(longlong)(int)uVar7,0);
            puVar12 = local_a8;
            if (7 < local_90) {
              puVar12 = (undefined1 *)local_a8._0_8_;
            }
            local_b8 = CONCAT44(local_b8._4_4_,(int)uVar7);
            uVar7 = FUN_1805fae9c(0xfde9,puVar11,uVar8 & 0xffffffff,puVar12);
            if ((int)(uVar7 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_18017cff0(uVar7 >> 0x20);
            }
          }
          uVar8 = FUN_1800a7e60(local_78,local_38,local_a8);
          FUN_18036bda0(uVar8);
          FUN_18015b930(local_78);
          FUN_18015b930(local_a8);
          FUN_18015c010(local_58);
          FUN_18015b930(local_38);
        }
      }
      FUN_18015b930(local_38);
    }
  }
}



