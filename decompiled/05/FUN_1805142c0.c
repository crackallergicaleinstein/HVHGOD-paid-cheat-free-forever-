// FUN_1805142c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805142c0 */

undefined8 * FUN_1805142c0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar2 = param_2[3];
  lVar8 = param_2[2];
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (lVar8 == 0xd) {
    lVar7 = *plVar4 + -0x6d656e6520707365;
    if ((lVar7 == 0) && (lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x6f6f2079, lVar7 == 0)) {
      lVar7 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x66;
    }
    if (lVar7 == 0) goto LAB_18051465a;
  }
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if ((lVar8 == 4) && ((int)*plVar4 == 0x73676f6c)) {
LAB_180514432:
    *param_1 = 10;
    return param_1;
  }
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if ((lVar8 == 4) && ((int)*plVar4 == 0x6373696d)) {
    plVar4 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      plVar4 = (longlong *)*param_3;
    }
    if (param_3[2] == 0x11) {
      lVar8 = *plVar4 + -0x20656c6261736964;
      if ((lVar8 == 0) && (lVar8 = plVar4[1] + -0x676f6c20656d6167, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)(plVar4 + 2) - 0x73;
      }
      if (lVar8 == 0) goto LAB_180514432;
    }
  }
  plVar4 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar4 = (longlong *)*param_2;
  }
  if (param_2[2] == 7) {
    iVar6 = (int)*plVar4 + -0x61706d69;
    if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)plVar4 + 4) - 0x7463, iVar6 == 0)) {
      iVar6 = *(byte *)((longlong)plVar4 + 6) - 0x73;
    }
    if (iVar6 == 0) {
      plVar4 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar4 = (longlong *)*param_3;
      }
      if (((2 < (ulonglong)param_3[2]) &&
          (lVar8 = (longlong)plVar4 + param_3[2],
          lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,&DAT_180866e68,3), lVar7 != lVar8)) &&
         (lVar7 - (longlong)plVar4 != -1)) goto LAB_180514432;
    }
  }
  uVar2 = param_2[3];
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  uVar3 = param_2[2];
  if ((7 < uVar3) && (*plVar4 == 0x746e656d65766f6d)) {
    *param_1 = 7;
    return param_1;
  }
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (uVar3 == 6) {
    iVar6 = (int)*plVar4 + -0x656d6163;
    if (iVar6 == 0) {
      iVar6 = *(ushort *)((longlong)plVar4 + 4) - 0x6172;
    }
    if (iVar6 == 0) goto LAB_1805144d8;
  }
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (uVar3 == 9) {
    lVar8 = *plVar4 + -0x65646f6d77656976;
    if (lVar8 == 0) {
      lVar8 = (ulonglong)*(byte *)(plVar4 + 1) - 0x6c;
    }
    if (lVar8 == 0) {
LAB_1805144d8:
      *param_1 = 9;
      return param_1;
    }
  }
  lVar8 = param_2[2];
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (lVar8 == 9) {
    lVar7 = *plVar4 + -0x69616873736f7263;
    if (lVar7 == 0) {
      lVar7 = (ulonglong)*(byte *)(plVar4 + 1) - 0x72;
    }
    if (lVar7 == 0) goto LAB_1805145b0;
  }
  uVar2 = param_2[3];
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (lVar8 == 0xd) {
    lVar7 = *plVar4 + -0x766f2065706f6373;
    if ((lVar7 == 0) && (lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x616c7265, lVar7 == 0)) {
      lVar7 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x79;
    }
    if (lVar7 == 0) goto LAB_1805145b0;
  }
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (lVar8 == 0xd) {
    lVar7 = *plVar4 + -0x736f7263206e6570;
    if ((lVar7 == 0) && (lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x69616873, lVar7 == 0)) {
      lVar7 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x72;
    }
    if (lVar7 == 0) {
LAB_1805145b0:
      *(undefined4 *)param_1 = 9;
      *(undefined4 *)((longlong)param_1 + 4) = 1;
      return param_1;
    }
  }
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if (lVar8 == 0xb) {
    lVar8 = *plVar4 + -0x6f6c20736d616863;
    if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x6163, lVar8 == 0)) {
      lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 10) - 0x6c;
    }
    if (lVar8 == 0) {
      plVar4 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar4 = (longlong *)*param_3;
      }
      if (param_3[2] == 0x18) {
        lVar8 = *plVar4 + -0x6962697369766e69;
        if ((lVar8 == 0) && (lVar8 = plVar4[1] + -0x656877207974696c, lVar8 == 0)) {
          lVar8 = plVar4[2] + -0x6465706f6373206e;
        }
        if (lVar8 == 0) {
LAB_18051465a:
          *(undefined4 *)param_1 = 9;
          *(undefined4 *)((longlong)param_1 + 4) = 2;
          return param_1;
        }
      }
    }
  }
  uVar2 = param_2[3];
  lVar8 = param_2[2];
  plVar4 = param_2;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_2;
  }
  if ((lVar8 != 8) || (*plVar4 != 0x736c61766f6d6572)) {
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (lVar8 == 0xc) {
      lVar7 = *plVar4 + -0x797469636f6c6576;
      if (lVar7 == 0) {
        lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x64756820;
      }
      if (lVar7 == 0) goto LAB_1805148f1;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if ((lVar8 == 8) && (*plVar4 == 0x64756820626d6f62)) {
LAB_1805148f1:
      *param_1 = 0xb;
      return param_1;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (lVar8 == 0xd) {
      lVar8 = *plVar4 + -0x6f74617463657073;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(plVar4 + 1) - 0x75682072, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 100;
      }
      if (lVar8 == 0) goto LAB_1805148f1;
    }
    uVar2 = param_2[3];
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (param_2[2] == 0xb) {
      lVar8 = *plVar4 + -0x20646e696279656b;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x7568, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 10) - 100;
      }
      if (lVar8 == 0) goto LAB_1805148f1;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (param_2[2] == 9) {
      lVar8 = *plVar4 + -0x736520726568746f;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(byte *)(plVar4 + 1) - 0x70;
      }
      if (lVar8 == 0) goto LAB_1805148f1;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    uVar3 = param_2[2];
    if (8 < uVar3) {
      lVar8 = *plVar4 + -0x6d65746920707365;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(byte *)(plVar4 + 1) - 0x73;
      }
      if (lVar8 == 0) goto LAB_1805149ba;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (10 < uVar3) {
      lVar8 = *plVar4 + -0x746920736d616863;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x6d65, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 10) - 0x73;
      }
      if (lVar8 == 0) goto LAB_1805149ba;
    }
    uVar2 = param_2[3];
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (9 < uVar3) {
      lVar8 = *plVar4 + -0x65746920776f6c67;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x736d;
      }
      if (lVar8 == 0) {
LAB_1805149ba:
        *param_1 = 0xd;
        return param_1;
      }
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (uVar3 == 6) {
      iVar6 = (int)*plVar4 + -0x67696c64;
      if (iVar6 == 0) {
        iVar6 = *(ushort *)((longlong)plVar4 + 4) - 0x7468;
      }
      if (iVar6 == 0) goto LAB_180514d2c;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if ((uVar3 == 4) && ((int)*plVar4 == 0x6373696d)) {
      plVar4 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar4 = (longlong *)*param_3;
      }
      if (param_3[2] == 0xd) {
        lVar8 = *plVar4 + -0x2063696d616e7964;
        if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(plVar4 + 1) - 0x6867696c, lVar8 == 0)) {
          lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x74;
        }
        if (lVar8 == 0) goto LAB_180514d2c;
      }
    }
    uVar2 = param_2[3];
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    uVar3 = param_2[2];
    if (9 < uVar3) {
      lVar8 = *plVar4 + -0x6f7463656a617274;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x7972;
      }
      if (lVar8 == 0) goto LAB_180514b61;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if ((0xe < uVar3) && (iVar6 = memcmp(plVar4,"esp projectiles",0xf), iVar6 == 0)) {
LAB_180514b61:
      *param_1 = 0xc;
      return param_1;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (0xc < uVar3) {
      lVar8 = *plVar4 + -0x69646e6920707365;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(uint *)(plVar4 + 1) - 0x6f746163, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x72;
      }
      if (lVar8 == 0) goto LAB_180514b61;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (uVar3 == 0xb) {
      lVar8 = *plVar4 + -0x65666e6920707365;
      if ((lVar8 == 0) && (lVar8 = (ulonglong)*(ushort *)(plVar4 + 1) - 0x6e72, lVar8 == 0)) {
        lVar8 = (ulonglong)*(byte *)((longlong)plVar4 + 10) - 0x6f;
      }
      if (lVar8 == 0) goto LAB_180514b61;
    }
    uVar2 = param_2[3];
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if ((uVar3 == 0x16) && (iVar6 = memcmp(plVar4,"static death materials",0x16), iVar6 == 0)) {
LAB_180514d2c:
      *param_1 = 5;
      return param_1;
    }
    lVar8 = param_2[2];
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if ((lVar8 == 0xf) && (iVar6 = memcmp(plVar4,"death shockwave",0xf), iVar6 == 0))
    goto LAB_180514d2c;
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if (lVar8 == 0xd) {
      lVar7 = *plVar4 + -0x6874206874616564;
      if ((lVar7 == 0) && (lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x65646e75, lVar7 == 0)) {
        lVar7 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x72;
      }
      if (lVar7 == 0) goto LAB_180514d2c;
    }
    plVar4 = param_2;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_2;
    }
    if ((lVar8 == 4) && ((int)*plVar4 == 0x6373696d)) {
      plVar4 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar4 = (longlong *)*param_3;
      }
      if (0x11 < (ulonglong)param_3[2]) {
        lVar8 = *plVar4 + -0x616f6265726f6373;
        if ((lVar8 == 0) && (lVar8 = plVar4[1] + -0x6f70616577206472, lVar8 == 0)) {
          lVar8 = (ulonglong)*(ushort *)(plVar4 + 2) - 0x736e;
        }
        if (lVar8 == 0) {
          *(undefined4 *)((longlong)param_1 + 4) = 1;
          goto LAB_1805155c3;
        }
      }
    }
    plVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar4 = (longlong *)*param_2;
    }
    if ((param_2[2] == 4) && ((int)*plVar4 == 0x6373696d)) {
      plVar4 = param_3 + 2;
      plVar5 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        plVar5 = (longlong *)*param_3;
      }
      if (*plVar4 == 0xc) {
        lVar8 = *plVar5 + -0x72206c6165766572;
        if (lVar8 == 0) {
          lVar8 = (ulonglong)*(uint *)(plVar5 + 1) - 0x72616461;
        }
        if (lVar8 == 0) goto LAB_180514d2c;
      }
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (longlong *)*param_3;
      }
      if (*plVar4 == 0x11) {
        lVar8 = *param_3 + -0x6576726573657270;
        if ((lVar8 == 0) && (lVar8 = param_3[1] + -0x6565666c6c696b20, lVar8 == 0)) {
          lVar8 = (ulonglong)*(byte *)(param_3 + 2) - 100;
        }
        if (lVar8 == 0) goto LAB_180514d2c;
      }
    }
    plVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar4 = (longlong *)*param_2;
    }
    if (((7 < (ulonglong)param_2[2]) &&
        (lVar8 = param_2[2] + (longlong)plVar4,
        lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"anti aim",8), lVar7 != lVar8)) &&
       (lVar7 - (longlong)plVar4 != -1)) {
      *(undefined4 *)((longlong)param_1 + 4) = 2;
      *(undefined4 *)param_1 = 0;
      return param_1;
    }
    uVar2 = param_2[2];
    plVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar4 = (longlong *)*param_2;
    }
    if (uVar2 == 7) {
      iVar6 = (int)*plVar4 + -0x65676172;
      if ((iVar6 == 0) && (iVar6 = *(ushort *)((longlong)plVar4 + 4) - 0x6f62, iVar6 == 0)) {
        iVar6 = *(byte *)((longlong)plVar4 + 6) - 0x74;
      }
      if (iVar6 == 0) goto LAB_180514f15;
    }
    plVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar4 = (longlong *)*param_2;
    }
    if (((uVar2 < 0xf) ||
        (lVar8 = thunk_FUN_1805f9970(plVar4,uVar2 + (longlong)plVar4,"peek assistance",0xf),
        lVar8 == uVar2 + (longlong)plVar4)) || (lVar8 - (longlong)plVar4 == -1)) {
      plVar4 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        plVar4 = (longlong *)*param_2;
      }
      if ((((ulonglong)param_2[2] < 7) ||
          (lVar8 = param_2[2] + (longlong)plVar4,
          lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"zeusbot",7), lVar7 == lVar8)) ||
         (lVar7 - (longlong)plVar4 == -1)) {
        plVar4 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          plVar4 = (longlong *)*param_2;
        }
        if ((((ulonglong)param_2[2] < 8) ||
            (lVar8 = param_2[2] + (longlong)plVar4,
            lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"knifebot",8), lVar7 == lVar8)) ||
           (lVar7 - (longlong)plVar4 == -1)) {
          plVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            plVar4 = (longlong *)*param_2;
          }
          if ((((ulonglong)param_2[2] < 0xc) ||
              (lVar8 = param_2[2] + (longlong)plVar4,
              lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"other \'bots\'",0xc), lVar7 == lVar8)) ||
             (lVar7 - (longlong)plVar4 == -1)) {
            plVar4 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              plVar4 = (longlong *)*param_2;
            }
            if ((((ulonglong)param_2[2] < 5) ||
                (lVar8 = param_2[2] + (longlong)plVar4,
                lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"autos",5), lVar7 == lVar8)) ||
               (lVar7 - (longlong)plVar4 == -1)) {
              plVar4 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                plVar4 = (longlong *)*param_2;
              }
              if (((6 < (ulonglong)param_2[2]) &&
                  (lVar8 = param_2[2] + (longlong)plVar4,
                  lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"ragebot",7), lVar7 != lVar8)) &&
                 (lVar7 - (longlong)plVar4 != -1)) {
                *param_1 = 0;
                return param_1;
              }
              plVar4 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                plVar4 = (longlong *)*param_2;
              }
              if (((7 < (ulonglong)param_2[2]) &&
                  (lVar8 = param_2[2] + (longlong)plVar4,
                  lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"legitbot",8), lVar7 != lVar8)) &&
                 (lVar7 - (longlong)plVar4 != -1)) {
                *param_1 = 1;
                return param_1;
              }
              plVar4 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                plVar4 = (longlong *)*param_2;
              }
              if ((((ulonglong)param_2[2] < 5) ||
                  (lVar8 = param_2[2] + (longlong)plVar4,
                  lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"enemy",5), lVar7 == lVar8)) ||
                 (lVar7 - (longlong)plVar4 == -1)) {
                plVar4 = param_2;
                if (0xf < (ulonglong)param_2[3]) {
                  plVar4 = (longlong *)*param_2;
                }
                if ((((ulonglong)param_2[2] < 0xe) ||
                    (lVar8 = param_2[2] + (longlong)plVar4,
                    lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"player enemies",0xe), lVar7 == lVar8))
                   || (lVar7 - (longlong)plVar4 == -1)) {
                  plVar4 = param_2;
                  if (0xf < (ulonglong)param_2[3]) {
                    plVar4 = (longlong *)*param_2;
                  }
                  if ((((ulonglong)param_2[2] < 6) ||
                      (lVar8 = param_2[2] + (longlong)plVar4,
                      lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"allies",6), lVar7 == lVar8)) ||
                     (lVar7 - (longlong)plVar4 == -1)) {
                    plVar4 = param_2;
                    if (0xf < (ulonglong)param_2[3]) {
                      plVar4 = (longlong *)*param_2;
                    }
                    if ((((ulonglong)param_2[2] < 8) ||
                        (lVar8 = param_2[2] + (longlong)plVar4,
                        lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"teammate",8), lVar7 == lVar8)) ||
                       (lVar7 - (longlong)plVar4 == -1)) {
                      plVar4 = param_2;
                      if (0xf < (ulonglong)param_2[3]) {
                        plVar4 = (longlong *)*param_2;
                      }
                      if ((((ulonglong)param_2[2] < 8) ||
                          (lVar8 = param_2[2] + (longlong)plVar4,
                          lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"friendly",8), lVar7 == lVar8))
                         || (lVar7 - (longlong)plVar4 == -1)) {
                        plVar4 = param_2;
                        if (0xf < (ulonglong)param_2[3]) {
                          plVar4 = (longlong *)*param_2;
                        }
                        if (((4 < (ulonglong)param_2[2]) &&
                            (lVar8 = param_2[2] + (longlong)plVar4,
                            lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"local",5), lVar7 != lVar8)) &&
                           (lVar7 - (longlong)plVar4 != -1)) {
                          *(undefined4 *)param_1 = 2;
                          *(undefined4 *)((longlong)param_1 + 4) = 2;
                          return param_1;
                        }
                        plVar4 = param_2;
                        if (0xf < (ulonglong)param_2[3]) {
                          plVar4 = (longlong *)*param_2;
                        }
                        if ((((ulonglong)param_2[2] < 5) ||
                            (lVar8 = (longlong)plVar4 + param_2[2],
                            lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"scene",5), lVar7 == lVar8)) ||
                           (lVar7 - (longlong)plVar4 == -1)) {
                          plVar4 = param_2;
                          if (0xf < (ulonglong)param_2[3]) {
                            plVar4 = (longlong *)*param_2;
                          }
                          if (((6 < (ulonglong)param_2[2]) &&
                              (lVar8 = (longlong)plVar4 + param_2[2],
                              lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"weather",7), lVar7 != lVar8)
                              ) && (lVar7 - (longlong)plVar4 != -1)) {
                            *(undefined4 *)param_1 = 3;
                            *(undefined4 *)((longlong)param_1 + 4) = 1;
                            return param_1;
                          }
                          plVar4 = param_2;
                          if (0xf < (ulonglong)param_2[3]) {
                            plVar4 = (longlong *)*param_2;
                          }
                          if ((((ulonglong)param_2[2] < 5) ||
                              (lVar8 = param_2[2] + (longlong)plVar4,
                              lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"world",5), lVar7 == lVar8))
                             || (lVar7 - (longlong)plVar4 == -1)) {
                            plVar4 = param_2;
                            if (0xf < (ulonglong)param_2[3]) {
                              plVar4 = (longlong *)*param_2;
                            }
                            if ((((ulonglong)param_2[2] < 10) ||
                                (lVar8 = param_2[2] + (longlong)plVar4,
                                lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"projectile",10),
                                lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                              plVar4 = param_2;
                              if (0xf < (ulonglong)param_2[3]) {
                                plVar4 = (longlong *)*param_2;
                              }
                              if ((((ulonglong)param_2[2] < 4) ||
                                  (lVar8 = param_2[2] + (longlong)plVar4,
                                  lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,&DAT_1807d0c58,4),
                                  lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                                plVar4 = param_2;
                                if (0xf < (ulonglong)param_2[3]) {
                                  plVar4 = (longlong *)*param_2;
                                }
                                if ((((ulonglong)param_2[2] < 4) ||
                                    (lVar8 = param_2[2] + (longlong)plVar4,
                                    lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,&DAT_1807c5d98,4),
                                    lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                                  plVar4 = param_2;
                                  if (0xf < (ulonglong)param_2[3]) {
                                    plVar4 = (longlong *)*param_2;
                                  }
                                  if ((((ulonglong)param_2[2] < 9) ||
                                      (lVar8 = param_2[2] + (longlong)plVar4,
                                      lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"spectator",9),
                                      lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                                    plVar4 = param_2;
                                    if (0xf < (ulonglong)param_2[3]) {
                                      plVar4 = (longlong *)*param_2;
                                    }
                                    if (((4 < (ulonglong)param_2[2]) &&
                                        (lVar8 = param_2[2] + (longlong)plVar4,
                                        lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"knife",5),
                                        lVar7 != lVar8)) && (lVar7 - (longlong)plVar4 != -1)) {
                                      *(undefined4 *)param_1 = 4;
                                      *(undefined4 *)((longlong)param_1 + 4) = 1;
                                      return param_1;
                                    }
                                    plVar4 = param_2;
                                    if (0xf < (ulonglong)param_2[3]) {
                                      plVar4 = (longlong *)*param_2;
                                    }
                                    if (((4 < (ulonglong)param_2[2]) &&
                                        (lVar8 = param_2[2] + (longlong)plVar4,
                                        lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"glove",5),
                                        lVar7 != lVar8)) && (lVar7 - (longlong)plVar4 != -1)) {
                                      *(undefined4 *)param_1 = 4;
                                      *(undefined4 *)((longlong)param_1 + 4) = 2;
                                      return param_1;
                                    }
                                    plVar4 = param_2;
                                    if (0xf < (ulonglong)param_2[3]) {
                                      plVar4 = (longlong *)*param_2;
                                    }
                                    if (((4 < (ulonglong)param_2[2]) &&
                                        (lVar8 = param_2[2] + (longlong)plVar4,
                                        lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"agent",5),
                                        lVar7 != lVar8)) && (lVar7 - (longlong)plVar4 != -1)) {
                                      *(undefined4 *)param_1 = 4;
                                      *(undefined4 *)((longlong)param_1 + 4) = 3;
                                      return param_1;
                                    }
                                    plVar4 = param_2;
                                    if (0xf < (ulonglong)param_2[3]) {
                                      plVar4 = (longlong *)*param_2;
                                    }
                                    if ((((ulonglong)param_2[2] < 4) ||
                                        (lVar8 = param_2[2] + (longlong)plVar4,
                                        lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,&DAT_18081ecf0,4),
                                        lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                                      plVar4 = param_2;
                                      if (0xf < (ulonglong)param_2[3]) {
                                        plVar4 = (longlong *)*param_2;
                                      }
                                      if ((((ulonglong)param_2[2] < 5) ||
                                          (lVar8 = param_2[2] + (longlong)plVar4,
                                          lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"paint",5),
                                          lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                                        plVar4 = param_2;
                                        if (0xf < (ulonglong)param_2[3]) {
                                          plVar4 = (longlong *)*param_2;
                                        }
                                        if ((((ulonglong)param_2[2] < 7) ||
                                            (lVar8 = param_2[2] + (longlong)plVar4,
                                            lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,"sticker",7),
                                            lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1)) {
                                          plVar4 = param_2;
                                          if (0xf < (ulonglong)param_2[3]) {
                                            plVar4 = (longlong *)*param_2;
                                          }
                                          if ((((ulonglong)param_2[2] < 4) ||
                                              (lVar8 = param_2[2] + (longlong)plVar4,
                                              lVar7 = thunk_FUN_1805f9970(plVar4,lVar8,
                                                                          &DAT_1806bdf84,4),
                                              lVar7 == lVar8)) || (lVar7 - (longlong)plVar4 == -1))
                                          {
                                            puVar1 = (ulonglong *)(param_2 + 2);
                                            if (0xf < (ulonglong)param_2[3]) {
                                              param_2 = (longlong *)*param_2;
                                            }
                                            if ((*puVar1 < 6) ||
                                               (lVar8 = *puVar1 + (longlong)param_2,
                                               lVar7 = thunk_FUN_1805f9970(param_2,lVar8,"config",6)
                                               , lVar7 == lVar8)) {
                                              *(undefined4 *)((longlong)param_1 + 4) = 0;
                                            }
                                            else {
                                              *(undefined4 *)((longlong)param_1 + 4) = 0;
                                              if (lVar7 - (longlong)param_2 != -1) {
                                                *(undefined4 *)param_1 = 6;
                                                return param_1;
                                              }
                                            }
LAB_1805155c3:
                                            *(undefined4 *)param_1 = 5;
                                            return param_1;
                                          }
                                        }
                                      }
                                    }
                                    *param_1 = 4;
                                    return param_1;
                                  }
                                }
                              }
                            }
                          }
                        }
                        *param_1 = 3;
                        return param_1;
                      }
                    }
                  }
                  *(undefined4 *)param_1 = 2;
                  *(undefined4 *)((longlong)param_1 + 4) = 1;
                  return param_1;
                }
              }
              *param_1 = 2;
              return param_1;
            }
          }
        }
      }
    }
LAB_180514f15:
    *(undefined4 *)((longlong)param_1 + 4) = 1;
    *(undefined4 *)param_1 = 0;
    return param_1;
  }
  uVar2 = param_3[3];
  lVar8 = param_3[2];
  plVar4 = param_3;
  if (0xf < uVar2) {
    plVar4 = (longlong *)*param_3;
  }
  if (lVar8 == 0x11) {
    lVar7 = *plVar4 + -0x732065766f6d6572;
    if ((lVar7 == 0) && (lVar7 = plVar4[1] + -0x6f6620786f62796b, lVar7 == 0)) {
      lVar7 = (ulonglong)*(byte *)(plVar4 + 2) - 0x67;
    }
    if (lVar7 != 0) goto LAB_1805146f0;
LAB_18051476b:
    *(undefined4 *)param_1 = 3;
    *(undefined4 *)((longlong)param_1 + 4) = 3;
  }
  else {
LAB_1805146f0:
    plVar4 = param_3;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_3;
    }
    if (lVar8 == 0x10) {
      lVar7 = *plVar4 + -0x332065766f6d6572;
      if (lVar7 == 0) {
        lVar7 = plVar4[1] + -0x786f62796b732064;
      }
      if (lVar7 == 0) goto LAB_18051476b;
    }
    plVar4 = param_3;
    if (0xf < uVar2) {
      plVar4 = (longlong *)*param_3;
    }
    if (lVar8 == 0xd) {
      lVar7 = *plVar4 + -0x642065766f6d6572;
      if ((lVar7 == 0) && (lVar7 = (ulonglong)*(uint *)(plVar4 + 1) - 0x6c616365, lVar7 == 0)) {
        lVar7 = (ulonglong)*(byte *)((longlong)plVar4 + 0xc) - 0x73;
      }
      if (lVar7 == 0) goto LAB_18051476b;
    }
    if (0xf < uVar2) {
      param_3 = (longlong *)*param_3;
    }
    if (lVar8 == 0xc) {
      lVar8 = *param_3 + -0x732065766f6d6572;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)*(uint *)(param_3 + 1) - 0x65706f63;
      }
      bVar9 = lVar8 == 0;
    }
    else {
      bVar9 = false;
    }
    *(undefined4 *)param_1 = 9;
    *(uint *)((longlong)param_1 + 4) = (bVar9 ^ 1) + 1;
  }
  return param_1;
}



