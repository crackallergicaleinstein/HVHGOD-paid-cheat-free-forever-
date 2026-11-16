// FUN_180370b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180370b70 */

undefined8 FUN_180370b70(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  ulonglong uVar1;
  longlong *_Buf1;
  ulonglong uVar2;
  longlong *_Buf1_00;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = param_1[1];
  _Buf1 = (longlong *)*param_1;
  lVar5 = (longlong)_Buf1 + uVar1;
  if (uVar1 < 7) {
LAB_180370cfa:
    if (5 < uVar1) goto LAB_180370d00;
  }
  else {
    lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"sticker",7);
    if ((lVar3 != lVar5) && (lVar3 - (longlong)_Buf1 != -1)) {
      return 6;
    }
    if (7 < uVar1) {
      lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"weapons/",8);
      if ((lVar3 != lVar5) && (lVar3 - (longlong)_Buf1 != -1)) {
        return 6;
      }
      if ((10 < uVar1) &&
         (lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"characters/",0xb), lVar3 != lVar5)) {
        if (lVar3 - (longlong)_Buf1 != -1) {
          return 6;
        }
        if (uVar1 < 8) goto LAB_180370d00;
      }
      lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"/player/",8);
      if ((lVar3 != lVar5) && (lVar3 - (longlong)_Buf1 != -1)) {
        return 6;
      }
      if (uVar1 < 9) {
LAB_180370cca:
        if (uVar1 < 8) goto LAB_180370d00;
      }
      else {
        lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"/players/",9);
        if ((lVar3 != lVar5) && (lVar3 - (longlong)_Buf1 != -1)) {
          return 6;
        }
        if ((0xe < uVar1) &&
           (lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"/custom_player/",0xf), lVar3 != lVar5)) {
          if (lVar3 - (longlong)_Buf1 != -1) {
            return 6;
          }
          goto LAB_180370cca;
        }
      }
      lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"/agents/",8);
      if (lVar3 != lVar5) {
        if (lVar3 - (longlong)_Buf1 != -1) {
          return 6;
        }
        goto LAB_180370cfa;
      }
    }
LAB_180370d00:
    lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"/arms/",6);
    if ((lVar3 != lVar5) && (lVar3 - (longlong)_Buf1 != -1)) {
      return 6;
    }
    if (((7 < uVar1) && (lVar3 = thunk_FUN_1805f9970(_Buf1,lVar5,"stattrak",8), lVar3 != lVar5)) &&
       (lVar3 - (longlong)_Buf1 != -1)) {
      return 6;
    }
  }
  uVar2 = param_2[1];
  _Buf1_00 = (longlong *)*param_2;
  lVar3 = uVar2 + (longlong)_Buf1_00;
  if ((5 < uVar2) &&
     (((lVar4 = thunk_FUN_1805f9970(_Buf1_00,lVar3,"weapon",6), lVar4 != lVar3 &&
       (lVar4 - (longlong)_Buf1_00 != -1)) ||
      ((8 < uVar2 &&
       ((lVar4 = thunk_FUN_1805f9970(_Buf1_00,lVar3,"character",9), lVar4 != lVar3 &&
        (lVar4 - (longlong)_Buf1_00 != -1)))))))) {
    return 6;
  }
  if (((param_3 != '\0') ||
      (((4 < uVar1 && (lVar4 = thunk_FUN_1805f9970(_Buf1,lVar5,"decal",5), lVar4 != lVar5)) &&
       (lVar4 - (longlong)_Buf1 != -1)))) ||
     (((4 < uVar2 && (lVar4 = thunk_FUN_1805f9970(_Buf1_00,lVar3,"decal",5), lVar4 != lVar3)) &&
      (lVar4 - (longlong)_Buf1_00 != -1)))) {
    return 4;
  }
  if (4 < uVar1) {
    lVar4 = thunk_FUN_1805f9970(_Buf1,lVar5,"cloud",5);
    if ((lVar4 != lVar5) && (lVar4 - (longlong)_Buf1 != -1)) {
      return 2;
    }
    if (0xd < uVar1) {
      lVar4 = *_Buf1 + -0x6c6169726574616d;
      if ((lVar4 == 0) && (lVar4 = (ulonglong)*(uint *)(_Buf1 + 1) - 0x75732f73, lVar4 == 0)) {
        lVar4 = (ulonglong)*(ushort *)((longlong)_Buf1 + 0xc) - 0x2f6e;
      }
      if (lVar4 == 0) {
        return 3;
      }
    }
  }
  if ((7 < uVar1) &&
     (((lVar4 = thunk_FUN_1805f9970(_Buf1,lVar5,"sun_glow",8), lVar4 != lVar5 &&
       (lVar4 - (longlong)_Buf1 != -1)) ||
      ((lVar4 = thunk_FUN_1805f9970(_Buf1,lVar5,"sun_disc",8), lVar4 != lVar5 &&
       (lVar4 - (longlong)_Buf1 != -1)))))) {
    return 3;
  }
  if (uVar2 == 7) {
    iVar6 = (int)*_Buf1_00 + -0x2e796b73;
    if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)_Buf1_00 + 4) - 0x6676, iVar6 == 0)) {
      iVar6 = *(byte *)((longlong)_Buf1_00 + 6) - 0x78;
    }
    if (iVar6 == 0) {
      return 5;
    }
  }
  if (0x10 < uVar1) {
    lVar5 = *_Buf1 + -0x6c6169726574616d;
    if ((lVar5 == 0) && (lVar5 = _Buf1[1] + -0x786f62796b732f73, lVar5 == 0)) {
      lVar5 = (ulonglong)*(byte *)(_Buf1 + 2) - 0x2f;
    }
    if (lVar5 == 0) {
      return 5;
    }
  }
  if (((10 < uVar2) &&
      (lVar5 = thunk_FUN_1805f9970(_Buf1_00,lVar3,"lightmapped",0xb), lVar5 != lVar3)) &&
     (lVar5 - (longlong)_Buf1_00 != -1)) {
    return 1;
  }
  if (uVar2 == 0x10) {
    lVar5 = *_Buf1_00 + -0x6c6f665f6f677363;
    if (lVar5 == 0) {
      lVar5 = _Buf1_00[1] + -0x7866762e65676169;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  if (0xc < uVar1) {
    lVar5 = *_Buf1 + -0x6c6169726574616d;
    if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(_Buf1 + 1) - 0x65642f73, lVar5 == 0)) {
      lVar5 = (ulonglong)*(byte *)((longlong)_Buf1 + 0xc) - 0x5f;
    }
    if (lVar5 == 0) goto LAB_1803710b6;
    lVar5 = *_Buf1 + -0x6c6169726574616d;
    if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(_Buf1 + 1) - 0x73632f73, lVar5 == 0)) {
      lVar5 = (ulonglong)*(byte *)((longlong)_Buf1 + 0xc) - 0x5f;
    }
    if (lVar5 == 0) goto LAB_1803710b6;
    if (0xc < uVar1) {
      lVar5 = *_Buf1 + -0x6c6169726574616d;
      if ((lVar5 == 0) && (lVar5 = (ulonglong)*(uint *)(_Buf1 + 1) - 0x72612f73, lVar5 == 0)) {
        lVar5 = (ulonglong)*(byte *)((longlong)_Buf1 + 0xc) - 0x5f;
      }
      if ((lVar5 == 0) ||
         ((0xe < uVar1 &&
          ((iVar6 = memcmp(_Buf1,"materials/maps/",0xf), iVar6 == 0 ||
           ((0x16 < uVar1 && (iVar6 = memcmp(_Buf1,"materials/models/props/",0x17), iVar6 == 0))))))
         )) goto LAB_1803710b6;
    }
  }
  if (uVar1 < 0x10) {
    return 0;
  }
  lVar5 = *_Buf1 + -0x6c6169726574616d;
  if (lVar5 == 0) {
    lVar5 = _Buf1[1] + -0x2f73706f72702f73;
  }
  if (lVar5 != 0) {
    return 0;
  }
LAB_1803710b6:
  if (uVar2 == 0x14) {
    lVar5 = *_Buf1_00 + -0x766e655f6f677363;
    if ((lVar5 == 0) && (lVar5 = _Buf1_00[1] + -0x746e656d6e6f7269, lVar5 == 0)) {
      lVar5 = (ulonglong)*(uint *)(_Buf1_00 + 2) - 0x7866762e;
    }
    if (lVar5 == 0) {
      return 1;
    }
  }
  if ((uVar2 != 0x1a) || (iVar6 = memcmp(_Buf1_00,"csgo_environment_blend.vfx",0x1a), iVar6 != 0)) {
    if (uVar2 == 0x10) {
      lVar5 = *_Buf1_00 + -0x6d6f635f6f677363;
      if (lVar5 == 0) {
        lVar5 = _Buf1_00[1] + -0x7866762e78656c70;
      }
      if (lVar5 == 0) {
        return 1;
      }
    }
    if (((uVar2 != 0xf) || (iVar6 = memcmp(_Buf1_00,"csgo_simple.vfx",0xf), iVar6 != 0)) &&
       ((uVar2 != 0x19 || (iVar6 = memcmp(_Buf1_00,"csgo_vertexlitgeneric.vfx",0x19), iVar6 != 0))))
    {
      return 0;
    }
  }
  return 1;
}



