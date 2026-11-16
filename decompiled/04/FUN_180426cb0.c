// FUN_180426cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180426cb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180426cb0(longlong param_1,undefined8 *param_2,char param_3)

{
  char *_Str1;
  longlong lVar1;
  int iVar2;
  char *_Dest;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_f8 [32];
  float local_d8;
  undefined4 uStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  float local_98;
  undefined4 uStack_94;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  _Dest = (char *)_malloc_base(0xe0);
  if (_Dest != (char *)0x0) {
    FUN_18063ab10(_Dest,0);
    _Dest[0xad] = '\x01';
    _Dest[0x80] = param_3;
    if (param_3 == '\x02') {
      _Dest[0x84] = '\0';
      _Dest[0x85] = '\0';
      _Dest[0x86] = '\0';
      _Dest[0x87] = '\0';
      _Dest[0x88] = '\a';
      _Dest[0x89] = '\0';
      _Dest[0x8a] = '\0';
      _Dest[0x8b] = '\0';
      _Dest[0x8c] = '\0';
      _Dest[0x8d] = '\0';
      _Dest[0x8e] = '\0';
      _Dest[0x8f] = '\0';
      _Dest[0x90] = '\a';
      _Dest[0x91] = '\0';
      _Dest[0x92] = '\0';
      _Dest[0x93] = '\0';
      local_d8 = 0.0;
      uStack_d4 = 7;
      _Dest[0x94] = '\0';
      _Dest[0x95] = '\0';
      _Dest[0x96] = -0x38;
      _Dest[0x97] = 'B';
      _Dest[0x98] = '\a';
      _Dest[0x99] = '\0';
      _Dest[0x9a] = '\0';
      _Dest[0x9b] = '\0';
      _Dest[0x9c] = '\0';
      _Dest[0x9d] = '\0';
      _Dest[0x9e] = '\0';
      _Dest[0x9f] = '\0';
      _Dest[0xa0] = '\a';
      _Dest[0xa1] = '\0';
      _Dest[0xa2] = '\0';
      _Dest[0xa3] = '\0';
    }
    else if (param_3 == '\x03') {
      _Dest[0x84] = '\0';
      _Dest[0x85] = '\0';
      _Dest[0x86] = 'H';
      _Dest[0x87] = 'B';
      _Dest[0x88] = '\a';
      _Dest[0x89] = '\0';
      _Dest[0x8a] = '\0';
      _Dest[0x8b] = '\0';
      local_d8 = 50.0;
      uStack_d4 = 7;
      _Dest[0x8c] = '\0';
      _Dest[0x8d] = '\0';
      _Dest[0x8e] = 'H';
      _Dest[0x8f] = 'B';
      _Dest[0x90] = '\a';
      _Dest[0x91] = '\0';
      _Dest[0x92] = '\0';
      _Dest[0x93] = '\0';
      _Dest[0x94] = '\0';
      _Dest[0x95] = '\0';
      _Dest[0x96] = 'H';
      _Dest[0x97] = 'B';
      _Dest[0x98] = '\a';
      _Dest[0x99] = '\0';
      _Dest[0x9a] = '\0';
      _Dest[0x9b] = '\0';
    }
    _Dest[0xb0] = '\0';
    _Dest[0xb1] = '\0';
    _Dest[0xb2] = -0x80;
    _Dest[0xb3] = '?';
    _Dest[0xb4] = '\0';
    _Dest[0xb5] = '\0';
    _Dest[0xb6] = '\0';
    _Dest[0xb7] = '\0';
    _Dest[0xb8] = '\0';
    _Dest[0xb9] = '\0';
    _Dest[0xba] = '\0';
    _Dest[0xbb] = '\0';
    _Dest[0xc4] = '\0';
    _Dest[0xc5] = '\0';
    _Dest[0xc6] = '\0';
    _Dest[199] = '\0';
    _Dest[0xbc] = '\0';
    _Dest[0xbd] = '\0';
    _Dest[0xbe] = -0x80;
    _Dest[0xbf] = '?';
    _Dest[0xc0] = '\0';
    _Dest[0xc1] = '\0';
    _Dest[0xc2] = '\0';
    _Dest[0xc3] = '\0';
    pbVar7 = (byte *)*param_2;
    if (pbVar7 != (byte *)0x0) {
      plVar9 = param_2 + 1;
      lVar10 = 0;
      puVar8 = param_2;
LAB_180426e33:
      uVar4 = *pbVar7 - 0x69;
      if ((uVar4 == 0) && (uVar4 = pbVar7[1] - 100, uVar4 == 0)) {
        uVar4 = (uint)pbVar7[2];
      }
      if (uVar4 == 0) {
        strncpy(_Dest,(char *)*plVar9,0x3f);
        _Dest[0x3f] = '\0';
      }
      else {
        iVar2 = FUN_180423a20(param_1);
        if (iVar2 == 0) {
          _Str1 = (char *)*puVar8;
          iVar2 = strcmp(_Str1,"gradientUnits");
          if (iVar2 == 0) {
            iVar2 = strcmp((char *)*plVar9,"objectBoundingBox");
            _Dest[0xad] = iVar2 == 0;
          }
          else {
            iVar2 = strcmp(_Str1,"gradientTransform");
            if (iVar2 == 0) {
              FUN_1804233f0(_Dest + 0xb0,*plVar9);
            }
            else if (*_Str1 == 'c') {
              if ((_Str1[1] == 'x') && (_Str1[2] == '\0')) {
                uVar3 = FUN_180422970(*plVar9,local_88);
                uStack_d4 = FUN_180422e60(uVar3);
                dVar11 = (double)FUN_1804227e0(local_88);
                local_d8 = (float)dVar11;
                *(ulonglong *)(_Dest + 0x84) = CONCAT44(uStack_d4,local_d8);
              }
              else {
                if ((*_Str1 != 'c') || ((_Str1[1] != 'y' || (_Str1[2] != '\0'))))
                goto LAB_180426f7c;
                uVar3 = FUN_180422970(*plVar9,local_88);
                uStack_cc = FUN_180422e60(uVar3);
                dVar11 = (double)FUN_1804227e0(local_88);
                local_d0 = (float)dVar11;
                *(ulonglong *)(_Dest + 0x8c) = CONCAT44(uStack_cc,local_d0);
              }
            }
            else {
LAB_180426f7c:
              if ((*_Str1 == 'r') && (_Str1[1] == '\0')) {
                uVar3 = FUN_180422970(*plVar9,local_88);
                uStack_c4 = FUN_180422e60(uVar3);
                dVar11 = (double)FUN_1804227e0(local_88);
                local_c8 = (float)dVar11;
                *(ulonglong *)(_Dest + 0x94) = CONCAT44(uStack_c4,local_c8);
              }
              else if (*_Str1 == 'f') {
                if ((_Str1[1] == 'x') && (_Str1[2] == '\0')) {
                  uVar3 = FUN_180422970(*plVar9,local_88);
                  uStack_bc = FUN_180422e60(uVar3);
                  dVar11 = (double)FUN_1804227e0(local_88);
                  local_c0 = (float)dVar11;
                  *(ulonglong *)(_Dest + 0x9c) = CONCAT44(uStack_bc,local_c0);
                }
                else {
                  if ((*_Str1 != 'f') || ((_Str1[1] != 'y' || (_Str1[2] != '\0'))))
                  goto LAB_180427058;
                  uVar3 = FUN_180422970(*plVar9,local_88);
                  uStack_b4 = FUN_180422e60(uVar3);
                  dVar11 = (double)FUN_1804227e0(local_88);
                  local_b8 = (float)dVar11;
                  *(ulonglong *)(_Dest + 0xa4) = CONCAT44(uStack_b4,local_b8);
                }
              }
              else {
LAB_180427058:
                if (((*_Str1 == 'x') && (_Str1[1] == '1')) && (_Str1[2] == '\0')) {
                  uVar3 = FUN_180422970(*plVar9,local_88);
                  uStack_ac = FUN_180422e60(uVar3);
                  dVar11 = (double)FUN_1804227e0(local_88);
                  local_b0 = (float)dVar11;
                  *(ulonglong *)(_Dest + 0x84) = CONCAT44(uStack_ac,local_b0);
                }
                else if (((*_Str1 == 'y') && (_Str1[1] == '1')) && (_Str1[2] == '\0')) {
                  uVar3 = FUN_180422970(*plVar9,local_88);
                  uStack_a4 = FUN_180422e60(uVar3);
                  dVar11 = (double)FUN_1804227e0(local_88);
                  local_a8 = (float)dVar11;
                  *(ulonglong *)(_Dest + 0x8c) = CONCAT44(uStack_a4,local_a8);
                }
                else if (((*_Str1 == 'x') && (_Str1[1] == '2')) && (_Str1[2] == '\0')) {
                  uVar3 = FUN_180422970(*plVar9,local_88);
                  uStack_9c = FUN_180422e60(uVar3);
                  dVar11 = (double)FUN_1804227e0(local_88);
                  local_a0 = (float)dVar11;
                  *(ulonglong *)(_Dest + 0x94) = CONCAT44(uStack_9c,local_a0);
                }
                else if (((*_Str1 == 'y') && (_Str1[1] == '2')) && (_Str1[2] == '\0')) {
                  uVar3 = FUN_180422970(*plVar9,local_88);
                  uStack_94 = FUN_180422e60(uVar3);
                  dVar11 = (double)FUN_1804227e0(local_88);
                  local_98 = (float)dVar11;
                  *(ulonglong *)(_Dest + 0x9c) = CONCAT44(uStack_94,local_98);
                }
                else {
                  iVar2 = strcmp(_Str1,"spreadMethod");
                  if (iVar2 == 0) {
                    lVar1 = *plVar9;
                    lVar6 = 0;
                    do {
                      lVar5 = lVar6 + 1;
                      if (*(char *)(lVar1 + lVar6) != (&DAT_18081e950)[lVar6]) {
                        lVar6 = 0;
                        goto LAB_1804271e0;
                      }
                      lVar6 = lVar5;
                    } while (lVar5 != 4);
                    _Dest[0xac] = '\0';
                  }
                  else {
                    iVar2 = strcmp(_Str1,"xlink:href");
                    if (iVar2 == 0) {
                      strncpy(_Dest + 0x40,(char *)(*plVar9 + 1),0x3e);
                      _Dest[0x7e] = '\0';
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_18042725c;
    }
LAB_180427291:
    *(undefined8 *)(_Dest + 0xd8) = *(undefined8 *)(param_1 + 0x9c28);
    *(char **)(param_1 + 0x9c28) = _Dest;
  }
  while (lVar6 = lVar5, lVar5 != 8) {
LAB_1804271e0:
    lVar5 = lVar6 + 1;
    if (*(char *)(lVar1 + lVar6) != "reflect"[lVar6]) {
      lVar6 = 0;
      goto LAB_180427210;
    }
  }
  _Dest[0xac] = '\x01';
  goto LAB_18042725c;
  while (lVar6 = lVar5, lVar5 != 7) {
LAB_180427210:
    lVar5 = lVar6 + 1;
    if (*(char *)(lVar1 + lVar6) != "repeat"[lVar6]) goto LAB_18042725c;
  }
  _Dest[0xac] = '\x02';
LAB_18042725c:
  lVar10 = lVar10 + 0x10;
  plVar9 = plVar9 + 2;
  pbVar7 = *(byte **)(lVar10 + (longlong)param_2);
  puVar8 = (undefined8 *)(lVar10 + (longlong)param_2);
  if (pbVar7 == (byte *)0x0) goto LAB_180427291;
  goto LAB_180426e33;
}



