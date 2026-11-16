// FUN_18048edb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048edb0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048edb0(longlong param_1)

{
  ushort *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  char *_Str1;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  undefined1 auStack_6ab8 [32];
  uint local_6a98;
  undefined1 local_6a90 [16];
  undefined1 local_6a80 [16];
  undefined1 local_6a70 [16];
  undefined1 local_6a60 [16];
  undefined1 local_6a48 [27104];
  undefined1 local_68 [16];
  ulonglong local_58;
  ulonglong local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_6ab8;
  local_6a98 = 0;
  if ((*(code **)(DAT_180bb8ae8 + 0xbf8) != (code *)0x0) &&
     (_Str1 = (char *)(**(code **)(DAT_180bb8ae8 + 0xbf8))(), _Str1 != (char *)0x0)) {
    for (; (cVar3 = *_Str1, cVar3 == ' ' || (((cVar3 - 9U & 0xfa) == 0 && (cVar3 != '\x0e'))));
        _Str1 = _Str1 + 1) {
    }
    iVar4 = strncmp(_Str1,"nl1:",4);
    if (iVar4 == 0) {
      local_48 = (undefined1  [16])0x0;
      local_38 = 0;
      cVar3 = FUN_18048e460(_Str1 + 4,local_48);
      if (cVar3 != '\0') {
        if ((5 < (ulonglong)(local_48._8_8_ - local_48._0_8_)) &&
           (uVar10 = (ulonglong)*(ushort *)local_48._0_8_,
           uVar10 + 6 <= (ulonglong)(local_48._8_8_ - local_48._0_8_))) {
          puVar1 = (ushort *)(local_48._0_8_ + 2);
          local_68 = (undefined1  [16])0x0;
          if (puVar1 == (ushort *)((longlong)puVar1 + uVar10)) {
            local_58 = 0;
            local_50 = 0xf;
            local_68._1_15_ = SUB1615((undefined1  [16])0x0,1);
            auVar2[0xf] = 0;
            auVar2._0_15_ = local_68._1_15_;
            local_68 = auVar2 << 8;
          }
          else {
            local_50 = 0xf;
            if (uVar10 < 0x10) {
              local_68._0_8_ = (undefined1 *)0x0;
              puVar5 = (undefined1 *)local_68._0_8_;
            }
            else {
              uVar12 = uVar10 | 0xf;
              if (uVar12 < 0x16) {
                uVar12 = 0x16;
              }
              puVar5 = (undefined1 *)FUN_18015bca0(uVar12 + 1);
              local_68._0_8_ = puVar5;
              local_50 = uVar12;
            }
            puVar9 = local_68;
            if (0xf < local_50) {
              puVar9 = puVar5;
            }
            FUN_18063aed0(puVar9,puVar1,uVar10);
            local_58 = uVar10;
            puVar9[uVar10] = 0;
          }
          uVar6 = local_50;
          uVar12 = local_58;
          if ((((uint)CONCAT11(*(undefined1 *)(local_48._0_8_ + uVar10 + 4),
                               *(undefined1 *)(local_48._0_8_ + uVar10 + 3)) << 8 |
                (uint)*(byte *)(local_48._0_8_ + uVar10 + 5) << 0x18 |
               (uint)*(byte *)(local_48._0_8_ + uVar10 + 2)) == 0x69d8) &&
             (uVar10 + 0x69de <= (ulonglong)(local_48._8_8_ - local_48._0_8_))) {
            FUN_18063aed0(local_6a48,local_48._0_8_ + uVar10 + 6,0x69d8);
            if (uVar12 == 0) {
              local_6a70 = (undefined1  [16])0x0;
              local_6a60 = (undefined1  [16])0x0;
              FUN_18015ba30(local_6a70,"Imported",8);
              puVar5 = local_6a70;
              uVar8 = 1;
            }
            else {
              local_6a90 = (undefined1  [16])0x0;
              local_6a80 = (undefined1  [16])0x0;
              pauVar11 = &local_68;
              if (0xf < uVar6) {
                pauVar11 = (undefined1 (*) [16])local_68._0_8_;
              }
              if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_18015bb70();
              }
              if (uVar12 < 0x10) {
                local_6a80._8_8_ = 0xf;
                local_6a80._0_8_ = uVar12;
                local_6a90 = *pauVar11;
              }
              else {
                uVar6 = uVar12 | 0xf;
                uVar10 = 0x7fffffffffffffff;
                if ((uVar6 < 0x8000000000000000) && (uVar10 = uVar6, uVar6 < 0x16)) {
                  uVar10 = 0x16;
                }
                uVar7 = FUN_18015bca0(uVar10 + 1);
                local_6a90._0_8_ = uVar7;
                local_6a80._8_8_ = uVar10;
                local_6a80._0_8_ = uVar12;
                FUN_18063aed0(uVar7,pauVar11,uVar12 + 1);
              }
              puVar5 = local_6a90;
              uVar8 = 2;
            }
            local_6a98 = uVar8;
            FUN_18048e8b0(param_1,puVar5,local_6a48,0);
            if ((uVar8 & 2) != 0) {
              uVar8 = uVar8 & 0xfffffffd;
              FUN_18015c010(local_6a90);
            }
            if ((uVar8 & 1) != 0) {
              FUN_18015c010(local_6a70);
            }
            *(undefined1 *)(param_1 + 0x214) = 1;
          }
          FUN_18015c010(local_68);
        }
      }
      FUN_180113710(local_48);
    }
  }
}



